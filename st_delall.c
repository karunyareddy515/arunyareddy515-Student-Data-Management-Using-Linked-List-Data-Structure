#include"header.h"
void st_delall(SLL **ptr){
if(*ptr==0){
printf("no records\n");
return;
}
SLL *del=*ptr;
while(del){
*ptr=del->next;
printf("node deleted\n");
free(del);
del=*ptr;
}
printf("all nodes are deleted\n");
}
