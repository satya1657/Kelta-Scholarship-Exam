#include<stdio.h>
#include<string.h>
#include<stdlib.h>

                    void fill(void);
                    void edit(void);
                    void exam(void);
                    void admit(void);
                    void exit1(void)
                       {
                           printf("\n\n%50CHANK YOU TO VISIT US :- \n",'T');
                           printf("\n\n\n\n");   
                     }
                    
                
               
                  
           struct app
           {
             char un[7],an[20],fn[20],mn[20],dob[15],adn[15],eml[40],add[60],pc[10],dis[25],phn[12],ec[20];
             int age;
           };
                                 

       int main()
         {     int z,n,i,t,j,q;
               char x,c;
              
               struct app a;
               here1:
               
               printf("%50CELTA SCHOLARSHIP EXAM -2018\n",'K');               
               printf("\n\n%8CELECT ANY ONE    ",'S');
               printf("\n\n%8CEGISTRATION FORM  :   1",'R');
               printf("\n\n%8CDMIT CARD         :   2",'A');
               printf("\n\n%8CDIT DETAILS       :   3",'E');
               printf("\n\n%8CXAM               :   4",'E');
               printf("\n\n%8CXIT               :   5",'E');
                printf("\n\n%16C    ",':');
                scanf("%d",&n);
                 scanf("%c",&c);
                


              if(n==1)
               {
                 fill();
                 goto here1;
                }
              else if(n==2)
               { 
                 admit();
              goto here1;
               } 
              else if(n==3)
               {
                 edit();
                 goto here1;
               }
              
              else if(n==4)
              {
                 exam();
                 printf("\n\n%55CHANKYOU   \n\n\n\n\n\n",'T');
               }
              else if(n==5)
              {
                 exit1();
              }
              else
                {
                 printf("\n\n%8COU ENTERED WRONG NUMBER TRY AGAIN   ",'Y');
                 goto here1;
                }
              return 0;
         }
                 
        


      void fill(void)
    {                       
           struct app a;           
           int i, n;
           char x,c;
           FILE *ptr1;
           ptr1=fopen("itp.txt","ab");
           printf("%50CELTA SCHOLARSHIP EXAM -2018\n",'K');
           printf("%57CPPLICATION FORM\n",'A');
           printf("\n\n%8CAME OF APPLICANT  : ",'N');
           scanf("%[^\n]",a.an);scanf("%c",&c);                           
           printf("\n\n%8CATHER's NAME  : ",'F');
           scanf("%[^\n]",a.fn);scanf("%c",&c);           
           printf("\n\n%8COTHER's NAME  : ",'M');
           scanf("%[^\n]",a.mn);scanf("%c",&c);          
           printf("\n\n%8CATE OF BIRTH(dd/mm/yyyy) : ",'D');
           scanf("%[^\n]",a.dob);scanf("%c",&c);           
           printf("\n\n%8CADHAR CARD NUMBER  : ",'A');
           scanf("%[^\n]",a.adn);scanf("%c",&c);
           me:
           printf("\n\n%8C-MAIL ID  : ",'E');
           scanf("%[^\n]",a.eml);scanf("%c",&c);
           for(i=0;a.eml[i]!='\0';i++)
             {
               if(a.eml[i]==' ')
              {
                  printf("WRONG E-MAIL ID TRY AGAIN");
                  goto me;
              }
           }
           printf("\n\n%8CDDRESS  : ",'A');
           scanf("%[^\n]",a.add);scanf("%c",&c);
           printf("\n\n%8CIN CODE  : ",'P');
           scanf("%[^\n]",a.pc);scanf("%c",&c);
           printf("\n\n%8CISTRICT  : ",'D');
           scanf("%[^\n]",a.dis);scanf("%c",&c);
           printf("\n\n%8CONTACT NUMBER  : ",'C');
           scanf("%[^\n]",a.phn);scanf("%c",&c);
           printf("\n\n%8CSER NAME (ONLY 6 CHARACTERS)  : ",'U');
           scanf("%[^\n]",a.un);scanf("%c",&c);
           printf("\n\n%8CGE(DO NOT INCLUDE DAYS)  : ",'A');
           scanf("%d",&a.age);scanf("%c",&c);
           if(a.age<18)
           {
              printf("\n\n%8CORRY... YOU ARE UNDERAGED SO YOU ARE NOT ELIGIBLE   ",'S');
                       
           }
             else if(a.age>22)
           {
             printf("\n\n%8CORRY... YOU ARE OVERAGED SO YOU ARE NOT ELIGIBLE    ",'S');

           }
printf("\n\n%8C---------------------------------------------------------------------------------------------------------------------------   \n",'-');
          printf("\n\n%8cXAMINATION CENTER   : ",'E');
          printf("\n\n%8cOTE :- WHICH EXAMINATION CENTER YOU WANT , PRESS NUMBER WRITTEN WITH THAT    : ",'N');
          printf("\n%16cELHI            :     1",'D');
          printf("\n%16cUMBAI           :     2",'M');
          printf("\n%16cAIPUR           :     3",'J'); 
          printf("\n%16cUCKHNOW         :     4",'L');
          printf("\n%16cATNA            :     5",'P');
          printf("\n%16cANDHINAGAR      :     6",'G');
          printf("\n%16cHANDIGARH       :     7",'C');
          printf("\n%16cBHOPAL          :     8",'B');
          here:
          printf("\n\n%10cUMBER : ",'N');
          scanf("%d",&n);scanf("%c",&c);
          if(n==1)
          strcpy(a.ec,"DELHI");
          else if(n==2)
          strcpy(a.ec,"MUMBAI");
          else if(n==3)
          strcpy(a.ec,"JAIPUR");
          else if(n==4)
          strcpy(a.ec,"LUCKHNOW");
          else if(n==5)
          strcpy(a.ec,"PATNA");
          else if(n==6)
          strcpy(a.ec,"GANDHINAGAR");
          else if(n==7)
          strcpy(a.ec,"CHANDIGARH");
          else if(n==8)
          strcpy(a.ec,"BHOPAL");
          else
           {
             printf("\n\n%8cOU ENTERED WRONG CHOICE FOR CENTER PLEASE ENTER RIGHT CHOICE : ",'Y');
             goto here;
            }
          printf("\n\n%8CF YOU WANT TO SUBMIT YOUR APPLICATION PRESS - 'Y'or'y' \n",'I');
          printf("\n\n%8CF YOU DO NOT WANT TO SUBMIT YOUR APPLICATION PRESS - 'N'or'n' \n",'I');
          printf("\n\n            : ");
          scanf("%c",&x);
            if(x=='Y'||x=='y')
                     {    fwrite(&a,sizeof(struct app),1,ptr1);        
                       
                  printf("\n\n%8cOU SUCCESSFULLY FILL YOUR APPLICATION FORM",'Y');
                  printf("  YOur APPLICATION  NUMBER AND PASSWORD  IS : %s\n\n",a.adn);      
                     } 
          fclose(ptr1);
       }                                      
     
         



      void admit(void) 
         {
           char c; 
           char un1[7],pw1[15];
           printf("USER NAME : ");
           scanf("%s",un1);
           printf("PASSWORD : ");
           scanf("%s",pw1);
           scanf("%c",&c);
           
           FILE *ptr;
           ptr=fopen("itp.txt","rb+");                                 
           struct app s,s1;                           
       
             while(fread(&s,sizeof(struct app),1,ptr)==1)
                     {
                          if(strcmp(un1,s.un)==0&&strcmp(pw1,s.adn)==0)
                               {
      printf("\n\n%5C____________________________________________________________________________________________________________________ ",'_');           
           printf("%58CELTA SCHOLARSHIP EXAM -2018\n",'K');
           printf("%57CDMIT CARD\n",'A');                      
           printf("\n\n%8CAME OF APPLICANT    : ",'N');
           printf("%s",s.an);
           printf("\n\n%8CATHER's NAME        : ",'F');
           printf("%s",s.fn);
           printf("\n\n%8COTHER's NAME        : ",'M');
           printf("%s",s.mn);
           printf("\n\n%8CATE OF BIRTH        : ",'D');
           printf("%s",s.dob);
           printf("\n\n%8CGE                  : ",'A');
           printf("%d",s.age);           
           printf("\n\n%8CADHAR CARD NUMBER   : ",'A');
           printf("%s",s.adn);
           printf("\n\n%8C-MAIL ID            : ",'E');
           printf("%s",s.eml);
           printf("\n\n%8CDDRESS              : ",'A');
           printf("%s",s.add);
           printf("\n\n%8CIN CODE             : ",'P');
           printf("%s",s.pc);
           printf("\n\n%8CISTRICT             : ",'D');
           printf("%s",s.dis);
           printf("\n\n%8CONTACT NUMBER       : ",'C');
           printf("%s",s.phn);
           printf("\n\n%8cXAMINATION CENTER   : ",'E');
           printf("%s",s.ec);
    printf("\n\n%5C____________________________________________________________________________________________________________________  : ",'_');
           
          }
                  
     }
      
   }

          
         
          void edit(void)
            {
             
           int v;char c;
           char un1[7],pw1[15];
           printf("USER NAME : ");
           scanf("%s",un1);
           printf("PASSWORD : ");
           scanf("%s",pw1);
           scanf("%c",&c);          
           FILE *ptr;
           ptr=fopen("itp.txt","rb+");                                 
           struct app s,s1;                           
       
             while(fread(&s,sizeof(struct app),1,ptr)==1)
                     {    
                          if(strcmp(un1,s.un)==0&&strcmp(pw1,s.adn)==0)
                               {
           printf("\n\n%50C:ENTER CORRECT DETAILS :- ",'-');                                   
           printf("\n\n%8CAME OF APPLICANT  : ",'N');
           scanf("%[^\n]",s1.an);scanf("%c",&c);
           printf("\n\n%8CATHER's NAME  : ",'F');
           scanf("%[^\n]",s1.fn);scanf("%c",&c);
           printf("\n\n%8COTHER's NAME  : ",'M');
           scanf("%[^\n]",s1.mn);scanf("%c",&c);
           printf("\n\n%8CATE OF BIRTH  : ",'D');
           scanf("%[^\n]",s1.dob);scanf("%c",&c);
           printf("\n\n%8CADHAR CARD NUMBER (PASSWORD)  : ",'A');
           scanf("%[^\n]",s1.adn);scanf("%c",&c);
           
           printf("\n\n%8C-MAIL ID  : ",'E');
           scanf("%[^\n]",s1.eml);scanf("%c",&c);
           printf("\n\n%8CDDRESS  : ",'A');
           scanf("%[^\n]",s1.add);scanf("%c",&c);
           printf("\n\n%8CIN CODE  : ",'P');
           scanf("%[^\n]",s1.pc);scanf("%c",&c);
           printf("\n\n%8CISTRICT  : ",'D');
           scanf("%[^\n]",s1.dis);scanf("%c",&c);
           printf("\n\n%8CONTACT NUMBER  : ",'C');
           scanf("%[^\n]",s1.phn);scanf("%c",&c);
           printf("\n\n%8CSER NAME (ONLY 6 CHARACTERS)  : ",'U');
           scanf("%[^\n]",s1.un);scanf("%c",&c);
              
            printf("\n\n%8CGE(DO NOT INCLUDE DAYS)  : ",'A');
           scanf("%d",&s1.age);scanf("%c",&c);
           if(s1.age<18)
           {
              printf("\n\n%8CORRY... YOU ARE UNDERAGED SO YOU ARE NOT ELIGIBLE   ",'S');
                       
           }
             else if(s1.age>22)
           {
             printf("\n\n%8CORRY... YOU ARE OVERAGED SO YOU ARE NOT ELIGIBLE    ",'S');

           }        
          printf("\n\n%8cXAMINATION CENTER   : ",'E');
          printf("\n\n%8cOTE :- WHICH EXAMINATION CENTER YOU WANT , PRESS NUMBER WRITTEN WITH THAT    : ",'N');
          printf("\n%16cELHI            :     1",'D');
          printf("\n%16cUMBAI           :     2",'M');
          printf("\n%16cAIPUR           :     3",'J'); 
          printf("\n%16cUCKHNOW         :     4",'L');
          printf("\n%16cATNA            :     5",'P');
          printf("\n%16cANDHINAGAR      :     6",'G');
          printf("\n%16cHANDIGARH       :     7",'C');
          printf("\n%16cBHOPAL          :     8",'B');
          here:
          printf("\n\n%10cUMBER : ",'N');
          scanf("%d",&v);scanf("%c",&c);
          if(v==1)
          strcpy(s1.ec,"DELHI");
          else if(v==2)
          strcpy(s1.ec,"MUMBAI");
          else if(v==3)
          strcpy(s1.ec,"JAIPUR");
          else if(v==4)
          strcpy(s1.ec,"LUCKHNOW");
          else if(v==5)
          strcpy(s1.ec,"PATNA");
          else if(v==6)
          strcpy(s1.ec,"GANDHINAGAR");
          else if(v==7)
          strcpy(s1.ec,"CHANDIGARH");
          else if(v==8)
          strcpy(s1.ec,"BHOPAL");
          else
           {
             printf("\n\n%8cOU ENTERED WRONG CHOICE FOR CENTER PLEASE ENTER RIGHT CHOICE : ",'Y');
             goto here;
            }
           fseek(ptr,-sizeof(struct app),SEEK_CUR);
           fwrite(&s1,sizeof(struct app),1,ptr);
        }
    }         
         fclose(ptr);
        

   }  

      void exam(void)
 {
             int i,t=0,j;
         char x,ch,st[16];
         FILE *p;
         p=fopen("it.txt","r");
         while(1)
           {
             ch=fgetc(p);
             if(ch==EOF)
             break;
             printf("%c",ch); 
           }
           fclose(p);
            
        for(i=0;i<15;i++)
          {
             printf("   %d :    ",i+1);
             scanf("%c",&st[i]);
             scanf("%c",&x);
          }
       
             if(st[0]=='b'||st[1]=='B')
                t+=4;
             else
                t-=2;
             if(st[1]=='c'||st[1]=='C')
                t+=4;
             else
                t-=2;
             if(st[2]=='a'||st[2]=='A')
                t+=4;
             else
                t-=2;
             if(st[3]=='a'||st[3]=='A')
                t+=4;
             else
                t-=2;
             if(st[4]=='b'||st[4]=='B')
                t+=4;
             else
                t-=2;
             if(st[5]=='c'||st[5]=='C')
                t+=4;
             else
                t-=2;
             if(st[6]=='a'||st[6]=='A')
                t+=4;
             else
                t-=2;
              if(st[7]=='a'||st[7]=='A')
                t+=4;
             else
                t-=2;
             if(st[8]=='c'||st[8]=='C')
                t+=4;
             else
                t-=2;
             if(st[9]=='d'||st[9]=='D')
                t+=4;
             else
                t-=2;
             if(st[10]=='b'||st[10]=='B')
                t+=4;
             else
                t-=2;
              if(st[11]=='c'||st[11]=='C')
                t+=4;
             else
                t-=2;
             if(st[12]=='d'||st[12]=='D')
                t+=4;
             else
                t-=2;
              if(st[13]=='c'||st[13]=='C')
                t+=4;
             else
                t-=2;
             if(st[7]=='a'||st[7]=='A')
                t+=4;
             else
                t-=2;
            printf("\n\n%8COUR OBTAINED MARKS       : %d",'Y',t); 
              
              if(t>=30)
                 {
                    printf("\n\n%8CONGRATES!... YOU ARE ELIGIBLE FOR KELTA SCHOLARSHIP :- ",'C');
                    
                   }
               else
                  {
                      printf("\n\n%8COU ARE NOT ELIGIBLE FOR KELTA SCHOLARSHIP :- ",'Y');
                    }  
               
    }  
               
         
           



                   


 
