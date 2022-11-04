#include <stdio.h> 
//#pragma pack(1)
struct student  
{  
   char a;  
   char b;  
   int c;  
};  

struct student1  
{  
   char a;  
   int c;  
   char b;  
};  

struct student2  
{  
   int c;  
   char a;  
   char b;  
};  


struct student3  
{  
   int c;  
   char a;  
   char b;  
}__attribute__((packed));  

int main()  
{  
   struct student stud; // variable declaration of the student type..  
   struct student1 stud1; // variable declaration of the student type..  
   struct student2 stud2; // variable declaration of the student type..  
   struct student3 stud3; // variable declaration of the student type..  
   // Displaying the size of the structure student.  
   printf("The size of the student structure is %lu\n", sizeof(stud));  
   printf("The size of the student structure is %lu\n", sizeof(stud1));  
   printf("The size of the student structure is %lu\n", sizeof(stud2));  
   printf("The size of the student structure is %lu\n", sizeof(stud3));  
   return 0;  
}
