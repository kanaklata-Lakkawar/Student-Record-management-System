
 
           
                 
                               
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
