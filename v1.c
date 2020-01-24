#include<stdio.h>
struct student
{
char name[50];
int age;
float marks;
}s1;
union student1
{
char name[50];
int age;
float marks;
}s2;
void main()
{
printf("size of structure variable is %d\n",sizeof(s1));
printf("size of union variable is %d\n",sizeof(s2));
}
