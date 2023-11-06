//Use of pointer to structure
#include<stdio.h>
struct employee
{
    int eid;
    char name[20];
};

void main()
{
    struct employee e1,*e;
    printf("Enter employee ID:");
    scanf("%d",&e1.eid);
    printf("Enter employee name:");
    scanf("%s",&e1.name);
    //gets(e1.name);
    e=&e1;
    printf("Name of employee:%s\n",e->name);
    printf("Employee ID:%d",e->eid);
}
