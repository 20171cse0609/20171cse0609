#include<stdio.h>
void main()
{
	int i,j;
	char firstname[100],lastname[100],fullname[100];
	printf("enter first name\n");
	gets(firstname);
	printf("enter last name\n");
	gets(lastname);
	j=0;
	for(i=0;firstname[i]!='\0';i++)
	{
	  fullname[i]=firstname[i];
	  j++;
	}
	fullname [i]='\0';
	printf("first name=%s\n",firstname);
	printf("last name=%s\n",lastname);
	printf("full name=%s\n",fullname);
}
