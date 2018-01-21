#include<stdio.h>
int main()
{
int a,n,f=1;
scanf("%d",&n);
for(a=1;a<=n;a++)
{
f=f*a;
}
printf("factorial number is %d",f);
return 0;
}
