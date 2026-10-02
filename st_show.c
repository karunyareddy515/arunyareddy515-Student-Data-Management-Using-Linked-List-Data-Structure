#include"header.h"
void st_show(SLL *p){
if(p==0){
printf("no records\n");
return;
}
while(p){
printf("%d %s %f\n",p->rollno,p->name,p->perc);
p=p->next;
}
}
