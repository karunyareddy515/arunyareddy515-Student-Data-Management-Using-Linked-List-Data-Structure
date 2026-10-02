#include"header.h"
void st_add(SLL **p){
int i=1,c;
SLL *new=malloc(sizeof(SLL)),*q=*p,*last=*p;
printf("enter name and perc\n");
scanf("%s %f",new->name,&new->perc);
new->next=0;
if(*p==0){
new->rollno=1;
*p=new;
return;
}
else{
	while(1){
		c=0;
		q=*p;
			while(q){
				if(i==q->rollno){
					c=1;
					break;
				}
                              q=q->next;
			}
		if(c==0)
			break;
		i++;
	}
}
new->rollno=i;
while(last->next!=0)
last=last->next;
last->next=new;

}
