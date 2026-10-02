#include"header.h"
int main(){
SLL *headptr=0;
char op;
FILE *fp=fopen("student.dat","r");
if(fp!=0){
	SLL *last;
	while(1){
		SLL *new=malloc(sizeof(SLL));
		if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->perc)==-1)
			break;
		new->next=0;
		if(headptr==0)
			headptr=new;
		else{
			last=headptr;
			while(last->next)
				last=last->next;
			last->next=new;
		}
	}
}
while(1){
printf("a)add new record\nd)delete record\ns)showlist\nm)modify record\nv)save records\ne)exit\nt)sort list\nl)delete all record\nr)reverse the list\n");
scanf(" %c",&op);
switch(op){
case 'a':st_add(&headptr);break;
case 's':st_show(headptr);break;
case 'd':st_del(&headptr);break;
case 'm':st_modify(headptr);break;
case 'v':st_savefile(headptr);break;
case 'l':st_delall(&headptr);break;
case 't':st_sort(headptr);break;
case 'r':st_revlink(&headptr);break;
case 'e':exit(0);
default:printf("enter again");
}

}


}
