#include"header.h"
void st_modify(SLL *ptr){
SLL *t;
char op,s[20];
int op1,c=0;
float f;
printf("enter which record need to modify\nr)search by rollno\nn)search by name\np)search by percentage\n");
scanf(" %c",&op);
switch(op){
case 'r':printf("enter rollno:");
         scanf("%d",&op1);
         while(ptr){
	 if(ptr->rollno==op1){
         printf("current record : %d %s %f\n",ptr->rollno,ptr->name,ptr->perc);
         printf("enter name and perc\n");
         scanf("%s %f",ptr->name,&ptr->perc);
         printf("modified sucess\n");
         return;
         }
         ptr=ptr->next;
         }
         printf("no record found\n");
         break;
case 'n':printf("enter name:");
	 scanf("%s",s);
	 t=ptr;
	 while(t){
		 if(strcmp(t->name,s)==0)
			 c++;
		 t=t->next;
	 }
	 if(c=0){
		 printf("no record founf\n");
		 return;
	 }
	 else if(c==1){
		 while(ptr){
			 if(strcmp(ptr->name,s)==0){
				 printf("current record : %d %s %f\n",ptr->rollno,ptr->name,ptr->perc);
				 printf("enter name and perc\n");
				 scanf("%s %f",ptr->name,&ptr->perc);
				 printf("modified sucess\n");
				 return;
			 }
			 ptr=ptr->next;  
		 }
	 }
	 else{
		 t=ptr;
		 while(t){
			 if(strcmp(t->name,s)==0)
			 {
				 printf("%d %s %f\n",t->rollno,t->name,t->perc);
			 }
			 t=t->next;
		 }
		 printf("enter rollno to modify:");
			 scanf("%d",&op1);
		 while(ptr){
			 if(ptr->rollno==op1){
				 printf("current record : %d %s %f\n",ptr->rollno,ptr->name,ptr->perc);
				 printf("enter name and perc\n");
				 scanf("%s %f",ptr->name,&ptr->perc);
				 printf("modified sucess\n");
				 return;
			 }
			 ptr=ptr->next;
		 }
	 }
	 break;

case 'p':printf("enter percentage:");
	 scanf("%f",&f);
	 t=ptr;
	 while(t){
		 if(t->perc==f)
			 c++;
		 t=t->next;
	 }
	 if(c=0){
		 printf("no record founf\n");
		 return;
	 }
	 else if(c==1){
		 while(ptr){
			 if(ptr->perc==f){
				 printf("current record : %d %s %f\n",ptr->rollno,ptr->name,ptr->perc);
				 printf("enter name and perc\n");
				 scanf("%s %f",ptr->name,&ptr->perc);
				 printf("modified sucess\n");
				 return;
			 }
			 ptr=ptr->next;  
		 }
	 }
	 else{
		 t=ptr;
		 while(t){
			 if(t->perc==f)
			 {
				 printf("%d %s %f\n",t->rollno,t->name,t->perc);
			 }
			 t=t->next;
		 }
		 printf("enter rollno to modify:");
			 scanf("%d",&op1);
		 while(ptr){
			 if(ptr->rollno==op1){
				 printf("current record : %d %s %f\n",ptr->rollno,ptr->name,ptr->perc);
				 printf("enter name and perc\n");
				 scanf("%s %f",ptr->name,&ptr->perc);
				 printf("modified sucess\n");
				 return;
			 }
			 ptr=ptr->next;
		 }
	 }
         break;
default:printf("invalid");
