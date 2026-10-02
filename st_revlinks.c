#include"header.h"
int count_node(SLL *);
void st_revlink(SLL **ptr){
if(*ptr==0){
printf("no records\n");
return;
}
int i,c=count_node(*ptr);
SLL **a,*t=*ptr;
if(c>1){
a=malloc(sizeof(SLL *)*c);
for(i=0;i<c;i++){
a[i]=t;
t=t->next;
}
for(i=c-1;i>0;i--)
a[i]->next=a[i-1];
a[0]->next=0;
*ptr=a[c-1];
}
}
