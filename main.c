#include <stdio.h>
#include <stdlib.h>
int menu()
{
    int choice;
   printf("\n");
   printf(" 1. Add Student\n");
   printf(" 2. Show Student\n");
   printf(" 3. Delete Student\n");
   printf(" 4. Update Student\n");
   printf(" 5. Search Student\n");
   printf(" 0. Exit\n");
   printf("Enter Your Choice:");
   scanf("%d",&choice);
   printf("\n");
   return choice;
}
struct Student
{
    int roll;
    char name[20];
    int paper1;
    int paper2;
    int paper3;
    int result;
    char remark[6];
};

int main()

{
   int loop=1,i=0,k=0,n,count=1,ch,temproll,lp,tempPaper1,tempPaper2,tempPaper3,subch1,subch2,subch3,subch4;
   char tempName[20];
   printf("-----------------------::WELCOME TO STUDENT MANAGEMENT SYSTEM::------------------------\n");
   printf("---------------------------------------------------------------------------------------\n");
   struct Student s[20];
while(loop)
{
int ch=menu();
switch(ch)
{
  case 1 : printf("-----------------------------------::ADD STUDENT::--------------------------------------------\n");
              i=k;
              printf("Enter number of students :");
              scanf("%d",&n);
              k=n+i;
              printf("\n");
               for(;i<k;i++)
            {   printf("student:%d\n",count++);
                printf("Enter name :");
                scanf(" %s",&s[i].name);
                printf("Enter Roll No.:");
                scanf(" %d",&s[i].roll);
                printf("Enter PAPER I Marks:");
                scanf(" %d",&s[i].paper1);
                while(s[i].paper1>100)
               { printf("INVALID MARKS !!!\nPLEASE ENTER PAPER I Marks AGAIN:");
                 scanf(" %d",&s[i].paper1);
               }
                printf("Enter PAPER II Marks:");
                scanf(" %d",&s[i].paper2);
                while(s[i].paper2>100)
               {printf("INVALID MARKS !!!\PLEASE ENTER PAPER II Marks AGAIN:");
                scanf(" %d",&s[i].paper2);
               }
                printf("Enter PAPER III Marks:");
                scanf(" %d",&s[i].paper3);
                while(s[i].paper3>100)
               {printf("INVALID MARKS !!!\PLEASE ENTER PAPER III Marks AGAIN:");
                scanf(" %d",&s[i].paper3);
               }
                s[i].result=s[i].paper1+s[i].paper2+s[i].paper3;
             }
                printf("All Records Saved !!!");
          break;

  case 2 :
          printf("-----------------------------------::ALL STUDENT'S RECORD::--------------------------------------------\n");
          printf("----------------------------------------------------------------------------------------------\n");
          printf("|  Roll\t|\tNAME \t|PAPER I Marks \t|PAPER II Marks\t|PAPER III Marks |  RESULT | REMARKS |\n");
          printf("----------------------------------------------------------------------------------------------\n");
          for(int i=0;i<k;i++)
        {  if(s[i].roll!=0)
           {
            if (s[i].result>=130 && s[i].paper1>=35 && s[i].paper2>=35 && s[i].paper3>=35)
            printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d|\tPASS |   \n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
            else
            printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d |\tFAIL |\n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
           }
        }  printf("----------------------------------------------------------------------------------------------\n");

          break;

  case 3 :
           printf("-----------------------------------::DELETE STUDENT::--------------------------------------------\n");
           printf("Enter Student Roll No.");
           scanf("%d",&temproll);

              printf("Do You really want to delete this record?\n");
              printf("1. Yes\n");
              printf("0. No\n");
              printf("Enter Your Choice:");
              scanf("%d",&ch);
              switch(ch)
              {
              case 1:
                  for(i=0;i<k;i++)
                  {
                   if(temproll==s[i].roll)
                   {
                    s[i].roll=0;
                    strcpy(s[i].name," ");
                    printf("...OK RECORD DELETED\n");
                    printf("----------------------------------------------------------------------------------------------\n");
                    printf("|  Roll\t|\tNAME \t|PAPER I Marks \t|PAPER II Marks\t|PAPER III Marks |  RESULT | REMARKS |\n");
                    printf("----------------------------------------------------------------------------------------------\n");
                   for(int i=0;i<k;i++)
                   {
                    if(s[i].roll!=0)
                     {
                    if (s[i].result>=130 && s[i].paper1>=35 && s[i].paper2>=35 && s[i].paper3>=35)
                    printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d|\tPASS |   \n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
                    else
                    printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d |\tFAIL |\n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
                      }
                    }
                   }
                  }
                  printf("----------------------------------------------------------------------------------------------\n");
                  break;
              case 0:
                      printf("...OK NO RECORD DELETED\n");
                  break;
              }
              break;

case 4 :      printf("-----------------------------------::UPDATE STUDENT::--------------------------------------------\n");
              printf("1. Name\n");
              printf("2. PAPER I Marks\n");
              printf("3. PAPER II Marks\n");
              printf("4. PAPER III Marks\n");
              printf("Enter Student Roll No.");
              scanf("%d",&temproll);
              for(int i=0;i<k;i++)
                {
              if(temproll==s[i].roll)
                {
               printf("Enter Your Choice:");
               scanf("%d",&ch);

              switch(ch)
              {
              case 1:
                      printf("Roll No. %d Current name is %s\n",temproll,s[i].name);
                      printf("Enter new name :");
                      scanf(" %s",&tempName);
                      printf("Do You really want to change the name to %s\n",tempName);
                      printf("1. Yes\n");
                      printf("2. No\n");
                      printf("Enter Your Choice:");
                      scanf("%d",&subch1);
                       switch(subch1)
                     {
                         case 1:
                               strcpy(s[i].name,tempName);
                               printf("...OK NAME UPDATED");
                               break;
                       case 2:
                               printf("...OK NAME IS NOT UPDATED");
                               break;
                     }
              break;
              case 2:
                      printf("Roll No. %d Current PAPER I marks is %d\n",temproll,s[i].paper1);
                      printf("Enter updated marks :");
                      scanf(" %d",&tempPaper1);
                      printf("Do You really want to update the marks to %d\n",tempPaper1);
                      printf("1. Yes\n");
                      printf("2. No\n");
                      printf("Enter Your Choice:");
                      scanf("%d",&subch2);
                      switch(subch2)
                    {
                        case 1:
                               s[i].paper1=tempPaper1;
                               s[i].result=s[i].paper1+s[i].paper2+s[i].paper3;
                               printf("...OK PAPER I MARKS  UPDATED");
                               break;
                       case 2:
                              printf("...OK PAPER I MARKS NOT UPDATED");
                              break;
                    }

                    break;
              case 3:
                      printf("Roll No. %d Current PAPER II Marks is %d\n",temproll,s[i].paper2);
                      printf("Enter updated marks :");
                      scanf(" %d",&tempPaper2);
                      printf("Do You really want to update the PAPER II MARKS to to %d\n",tempPaper2);
                      printf("1. Yes\n");
                      printf("2. No\n");
                      printf("Enter Your Choice:");
                      scanf("%d",&subch3);
                       switch(subch3)
                      {
                       case 1:
                              s[i].paper2=tempPaper2;
                              s[i].result=s[i].paper1+s[i].paper2+s[i].paper3;
                              printf("...OK PAPER II MARKS UPDATED");
                              break;
                       case 2:
                              printf("...OK PAPER II MARKS NOT UPDATED");
                              break;
                      }
                      break;
              case 4:
                     printf("Roll No. %d Current Maths Marks is %d\n",temproll,s[i].paper3);
                     printf("Enter updated marks :");
                     scanf(" %d",&tempPaper3);
                     printf("Do You really want to update the paper III marks  to %d\n",tempPaper3);
                     printf("1. Yes\n");
                     printf("2. No\n");
                     printf("Enter Your Choice:");
                     scanf("%d",&subch4);
                     switch(subch4)
                    {
                    case 1:
                           s[i].paper3=tempPaper3;
                           s[i].result=s[i].paper1+s[i].paper2+s[i].paper3;
                           printf("...OK PAPER III MARKS UPDATED");
                           break;
                    case 2:
                           printf("...OK PAPER III MARKS NOT UPDATED");
                           break;
                    }
                    break;
              }
}
}
          break;

case 5 :
           printf("-----------------------------------::SEARCH STUDENT::--------------------------------------------\n");
           printf(" 1.Search by name\n");
           printf(" 2.Search search by roll number\n");
           printf("Enter your choice :");
           scanf("%d",&ch);
           switch(ch)
           {
            case 1:
                    printf("Enter Student's Name :");
                    scanf("%s",tempName);
                    printf("----------------------------------------------------------------------------------------------\n");
                    printf("|  Roll\t|\tNAME \t|PAPER I Marks \t|PAPER II Marks\t|PAPER III Marks |  RESULT | REMARKS |\n");
                    printf("----------------------------------------------------------------------------------------------\n");
                    for(int i=0;i<k;i++)
                {   if(!strcmp(s[i].name,tempName))
                     {
                      if (s[i].result>=130 && s[i].paper1>=35 && s[i].paper2>=35 && s[i].paper3>=35)
                    printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d|\tPASS |   \n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
                    else
                    printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d |\tFAIL |\n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
                      }
                }    printf("----------------------------------------------------------------------------------------------\n");
                     printf("Search Done..");
                     break;
            case 2:
                    printf("Enter Student Roll No.:");
                    scanf("%d",&temproll);
                    printf("----------------------------------------------------------------------------------------------\n");
                    printf("|  Roll\t|\tNAME \t|PAPER I Marks \t|PAPER II Marks\t|PAPER III Marks |  RESULT | REMARKS |\n");
                    printf("----------------------------------------------------------------------------------------------\n");
                    for(int i=0;i<k;i++)
                    {
                    if(temproll==s[i].roll)
                    {
                    if (s[i].result>=130 && s[i].paper1>=35 && s[i].paper2>=35 && s[i].paper3>=35)
                    printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d|\tPASS |   \n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
                    else
                    printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d |\tFAIL |\n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
                    }
                    }
                    printf("----------------------------------------------------------------------------------------------\n");
                    printf("Search Done..");
                    break;
        }
        break;
case 0 :
              loop=0;
              printf(" 0. Exit\n");
              printf(" Do you really want to exit\n");
              printf(" 1. Yes\n");
              printf(" 2. No\n");
              printf("Enter your choice :");
              scanf("%d",&ch);
              switch(ch)
              {
              case 1:
                    printf(" T H A N K   Y O U !!!\n  F O R   U S I N G   T H E   S Y S T E M");
                    break;
              case 2:
                      loop=1;
                    break;
              }
             break;
default:
        printf("Wrong choice!!!\nPlease Enter correct Choice\n");
        break;
}
}
return 0;
}

 
           
                 
                               
          
