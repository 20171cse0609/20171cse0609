#include<stdio.h>
int prime(int num)
{
int i;
for(i=2;i<num;i++)
{
if(num%i==0)
return 0;
}
return 1;
}
void main()
{
int m,n,res,i;
scanf("%d%d",&m,&n);
for(i=m;i<=n;i++)
{
res=prime(i);
 if(res==1)
    printf("%d\n",i);
}printf("sandeep gowda");
}


