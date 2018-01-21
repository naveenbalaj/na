#include<stdio.h>
int main()
{
int a,r,sum=0,temp;
scanf("%d",&a);
temp=a;
while(temp!=0)
{
r=temp%10;
sum=sum+(r*r*r);
temp=temp/10;
}
if(sum==a)
{
printf("%d is armstrong number",a);
}
else
{
printf("%d is not a armstrong number",a);
}
return 0;
}
