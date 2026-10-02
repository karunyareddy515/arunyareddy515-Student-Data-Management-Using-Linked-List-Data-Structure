#include"header.h"
void st_del(SLL **ptr){
SLL *del=*ptr,*prev,*first=*ptr;
char op,s[20];
int op1,c=0;
printf("r)enter rollno\nn)name to delete\n");
scanf(" %c",&op);
switch(op){
case 'r':st_show(*ptr);
         l:
         printf("enter the rollno to delete:\n");
         scanf("%d",&op1);
         while(del){
	 if(del->rollno==op1){
             if(del==*ptr)
                *ptr=del->next;
             else
               prev->next=del->next;
	 free(del);
         return;
           }
         prev=del;
         del=del->next;
         }
         printf("rollno not found\n");
         break;
case 'n':st_show(*ptr);
         printf("enter the name to delete:\n");
         scanf("%s",s);
         while(first){
         if(strcmp(first->name,s)==0)
         c++;
         first=first->next;
         }
         first=*ptr;
         if(c==0){
         printf("no record found\n");
          return;
          }
         else if(c==1){
         printf("%d\n",c);
         while(del){
         if(strcmp(del->name,s)==0){
             if(del==*ptr)
                *ptr=del->next;
             else
               prev->next=del->next;
         free(del);
         return;
         }
         prev=del;
         del=del->next;
         }
         }
         else{
         while(first){
	 if(strcmp(first->name,s)==0)
            printf("%d %s\n",first->rollno,first->name);
            first=first->next;
         }
         goto l;
         }
         break;
default:printf("invalid\n");
}

}
