#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct student
{
int rollno;
char name[20];
float perc;
struct student *next;
}SLL;
void st_add(SLL **);
void st_show(SLL *);
void st_modify(SLL *);
void st_del(SLL **);
void st_savefile(SLL *);
void st_delall(SLL **);
void st_sort(SLL *);
void st_revlink(SLL **);
