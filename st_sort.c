#include"header.h"
int count_node(SLL *ptr){
	int c=0;
	while(ptr){
		c++;
		ptr=ptr->next;
	}
	return c;
}
void st_sort(SLL *ptr){
	if(ptr==0){
		printf("no records\n");
		return;
	}
	int i,j,c=count_node(ptr);
	char op;
	SLL *p1=ptr,*p2,t;
	printf("r)rollname\nn)name\npercentage\n");
	scanf(" %c",&op);
	switch(op){
		case 'r':for(i=0;i<c-1;i++){
				 p2=p1->next;
				 for(j=0;j<c-1-i;j++){
					 if(p1->rollno>p2->rollno){
                                                
						 t.rollno=p1->rollno;
						 strcpy(t.name,p1->name);
						 t.perc=p1->perc;

						 p1->rollno=p2->rollno;
						 strcpy(p1->name,p2->name);
						 p1->perc=p2->perc;

						 p2->rollno=t.rollno;
						 strcpy(p2->name,t.name);
						 p2->perc=t.perc;

					 }
					 p2=p2->next;
				 }
				 p1=p1->next;
			 }
			 break;

		case 'n':for(i=0;i<c-1;i++){
				 p2=p1->next;
				 for(j=0;j<c-1-i;j++){
					 if(p1->name[0]>p2->name[0]){
						 t.rollno=p1->rollno;
						 strcpy(t.name,p1->name);
						 t.perc=p1->perc;

						 p1->rollno=p2->rollno;
						 strcpy(p1->name,p2->name);
						 p1->perc=p2->perc;

						 p2->rollno=t.rollno;
						 strcpy(p2->name,t.name);
						 p2->rollno=t.perc;

					 }
					 p2=p2->next;
				 }
				 p1=p1->next;
			 }
			 break;

		case 'p':for(i=0;i<c-1;i++){
				 p2=p1->next;
				 for(j=0;j<c-1-i;j++){
					 if(p1->perc>p2->perc){
						 t.rollno=p1->rollno;
						 strcpy(t.name,p1->name);
						 t.perc=p1->perc;

						 p1->rollno=p2->rollno;
						 strcpy(p1->name,p2->name);
						 p1->perc=p2->perc;

						 p2->rollno=t.rollno;
						 strcpy(p2->name,t.name);
						 p2->rollno=t.perc;

					 }
					 p2=p2->next;
				 }
				 p1=p1->next;
			 }
			 break;
       	default:printf("invaild option\n");
	}

}
