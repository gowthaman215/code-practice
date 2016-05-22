#include <stdio.h>
#include <string.h>
#include <curl/curl.h>

#define URL "http://192.168.56.101:8088/olmDSMN"

size_t write_data(void *ptr, size_t size, size_t nmeb, void *stream)
{
    return fwrite((FILE*)ptr,size,nmeb,(char*)stream);
}

size_t read_data(void *ptr, size_t size, size_t nmeb, void *stream)
{
    return fread((FILE*)ptr,size,nmeb,(char*)stream);
}

int sendMessage (char * inFile, char * outFile) {
    //writing to file initially
    FILE * rfp = fopen(inFile, "r");
    if(!rfp) {
        perror("Read File Open:");
        //        exit(0);
    }

    FILE * wfp = fopen(outFile, "w+"); //File pointer to write the soap response
    if(!wfp) {
        perror("Write File Open:");
        //        exit(0);
    }

    struct curl_slist *header = NULL;
    header = curl_slist_append (header, "Content-Type:text/xml");
    header = curl_slist_append (header, "SOAPAction: myur1");
    header = curl_slist_append (header, "Transfer-Encoding: chunked");
    header = curl_slist_append (header, "Expect:");
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, URL);
        curl_easy_setopt(curl, CURLOPT_POST, 1L);
        curl_easy_setopt(curl, CURLOPT_READFUNCTION, read_data);  //Reads xml file to be sent via POST operationt
        curl_easy_setopt(curl, CURLOPT_READDATA, rfp); 
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);  //Gets data to be written to file
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, wfp);  //Writes result to file
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, header);
        curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE_LARGE, (curl_off_t)-1);
        //        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
        curl_easy_setopt(curl, CURLOPT_VERBOSE,1L);            
        res = curl_easy_perform(curl);

        curl_easy_cleanup(curl);

        return 1;
    }
}
