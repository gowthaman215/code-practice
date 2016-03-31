
#include "DateTimeLibrary.h"

//==========================================================================================
// 1. dateDiff :  To find no of days difference between dates.
//==========================================================================================



long int dateDiff(char* date1,char* date2)
{	
	std::tm tm1={0}, tm2={0};

	strptime(date1,"%Y-%m-%d",&tm1);
	strptime(date2,"%Y-%m-%d",&tm2);

	std::time_t time1 = std::mktime(&tm1);
	std::time_t time2 = std::mktime(&tm2);

	std::time_t daydiff = (time1 - time2) / (24*60*60);
	daydiff = (daydiff<0)? -daydiff :daydiff;
	//long int daydiff = (long int)std::difftime(time1, time2) / (24*60*60);
	return daydiff;
}



//==========================================================================================
// 2. formatDate :  To format dd-mm-yyyy date structure to yyyy-mm-dd date structure.
//==========================================================================================

string formatDate(char *p_newDate)
{
	char l_date_buf[20+1];
	memset(l_date_buf,'\0',sizeof(l_date_buf));
	struct tm tm;
	strptime(p_newDate, "%d-%m-%Y", &tm);
	strftime(l_date_buf, sizeof(l_date_buf), "%Y-%m-%d", &tm);

	return string(l_date_buf);
}
