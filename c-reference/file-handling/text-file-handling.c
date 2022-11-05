#include<stdio.h>  
void main( )  
{  
	FILE *fpr ;
        FILE *fpw ; 

	char ch ;  
	
	fpr = fopen("test-file-read.txt","r") ;  
	fpw = fopen("test-file-write.txt","w");


	while ( 1 )  
	{  
		ch = fgetc ( fpr ) ;  
		if ( ch == EOF )  
			break ;
	        
	        	
		fprintf(fpw, "%c", ch) ;  
	}



        
	fclose (fpr ) ;  
	fclose (fpw ) ;  
}  
