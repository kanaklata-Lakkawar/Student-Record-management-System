
 
           
                 
                                 break;
                       case 2:
                                 {
                                  printf("...OK PAPER I MARKS NOT UPDATED");
                                 }
                                 break;
                       }
                      }
                  break;
              case 3:
                      {

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
                                 {
                                  s[i].paper2=tempPaper2;
                                  s[i].result=s[i].paper1+s[i].paper2+s[i].paper3;
                                  printf("...OK PAPER II MARKS UPDATED");
                                 }
                                 break;
                       case 2:
                                 {
                                  printf("...OK PAPER II MARKS NOT UPDATED");
                                 }
                                 break;
                       }
                      }
                  break;
              case 4:
                       {

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
                                 {
                                  s[i].paper3=tempPaper3;
                                  s[i].result=s[i].paper1+s[i].paper2+s[i].paper3;
                                  printf("...OK PAPER III MARKS UPDATED");
                                 }
                                 break;
                       case 2:
                                 {
                                  printf("...OK PAPER III MARKS NOT UPDATED");
                                 }
                                 break;
                       }
                      }
                  break;
              }
}
}
          }

             break;

case 5 :
        {
          printf(" 5. Search Student\n");
          printf(" 1.Search by name\n");
          printf(" 2.Search search by roll number\n");



           printf("Enter your choice :");
           scanf("%d",&ch);
           switch(ch)
           {
            case 1:
                   {
                     printf("Enter Student's Name :");
                     scanf("%s",tempName);
                     for(int i=0;i<k;i++)
                      {
                          if(!strcmp(s[i].name,tempName))
                       {
                         if (s[i].result>=130 && s[i].paper1>=35 && s[i].paper2>=35 && s[i].paper3>=35)
                    printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d|\tPASS |   \n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
                    else
                    printf("| %d\t|\t%s\t|\t%d\t|\t%d\t|\t%d\t |\t%d |\tFAIL |\n",s[i].roll,s[i].name,s[i].paper1,s[i].paper2,s[i].paper3,s[i].result,s[i].remark);
                       }
                      }
                     printf("Search Done..");

                   }
                    break;
            case 2:
                   {
                     printf("Enter Student Roll No.:");
                     scanf("%d",&temproll);
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
                    printf("Search Done..");

                    }
                      break;


                 }
        }

      break;
case 0 :
              {
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
                    {
                       system("clc");
                       printf(" T H A N K   Y O U !!!\n  F O R   U S I N G   T H E   S Y S T E M");
                    }
                    break;
              case 2:
                    {
                      loop=1;
                    }
                    break;
              }
              }
             break;

default:
              printf("Wrong choice!!!\nPlease Enter correct Choice\n");
              break;


}


}


return 0;
}
