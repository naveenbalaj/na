#include<stdio.h>
void main()
{
int value,exponant,result;
printf("enter the number");
scanf("%d%d",&value,&exponant);
while(exponant!=0)
{
result=value;
--exponant;
}
printf("%d",result);
}
