
/******************************************************************************
Employee Project Management
*******************************************************************************/
#include "EmpProjMgmt.h"

int main()
{

 char logon_user[10+1];
 char logon_password[10+1];
 
 int choice;
 
 printf("\t\t\t\t\t+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+\n");
 printf("\t\t\t\t\t|E|m|p|l|o|y|e|e| |P|r|o|j|e|c|t| |M|a|n|a|g|m|e|n|t|\n");
 printf("\t\t\t\t\t+-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+\n");
 printf("\n\n");
 printf("\t\t\t\t\tLogin As\n\n");
 printf("\t\t\t\t\t1. Admin\n");
 printf("\t\t\t\t\t2. Employee\n");
 
 printf("\t\t\t\t\tYour choice ");
 scanf("%d",&choice);
 fflush(stdin);
 
 printf("\n\n");
 
 printf("\t\t\t\t\tUser Name : "); 
 scanf("%s",logon_user);
 printf("\t\t\t\t\tPassword  : "); 
 scanf("%s",logon_password);
 
 //printf("\t\t\t\t\tUser Name : %s\n",logon_user);
 //printf("\t\t\t\t\tPassword  : %s\n",logon_password);
 
 printf("\n\n"); 
 
 printf("\t\t\t\t\tLogged on user : %s...\n",logon_user);
 
 printf("\n\n");
 
 printf("\t\t\t\t\tOptions\n\n");
 printf("\t\t\t\t\t1. Add Employee\n");
 printf("\t\t\t\t\t2. Delete Employee\n");
 printf("\t\t\t\t\t3. Add Project\n");
 printf("\t\t\t\t\t4. Delete Project\n");
 printf("\t\t\t\t\t5. Allocate Project\n");
 printf("\t\t\t\t\t6. logout\n");
 
 printf("\t\t\t\t\tYour choice ");
 scanf("%d",&choice);
 fflush(stdin);
 
 switch(choice)
 {
    case 1:
        printf("\t\t\t\t\t1. Add Employee\n"); break;
    case 2:
        printf("\t\t\t\t\t2. Delete Employee\n"); break;
    case 3:
        printf("\t\t\t\t\t3. Add Project\n"); break;
    case 4:
        printf("\t\t\t\t\t4. Delete Project\n"); break;
    case 5:
        printf("\t\t\t\t\t5. Allocate Project\n"); break;
    case 6:
        printf("\t\t\t\t\t6. logout\n"); break;
    default:
        printf("\t\t\t\t\tInvalid choice. please try again\n");
 }
 
 printf("\n\n");
 
 read_password1();
 encrypt_password();

 
 /*
 if(choice==1)
 {
    login_as_admin();    
 }
 else
 {
    login_as_employee(); 
 }
 */
 
 
 
    return 0;
}
