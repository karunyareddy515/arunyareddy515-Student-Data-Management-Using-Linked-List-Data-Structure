#include"header.h"
void st_savefile(SLL *p){
if(p==0){
printf("no records\n");
return;
}
FILE *fp=fopen("student.dat","w");
while(p){
fprintf(fp,"%d %s %f\n",p->rollno,p->name,p->perc);
p=p->next;
}
fclose(fp);
printf("saved sucess\n");
}
