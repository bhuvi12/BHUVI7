#include<stdio.h>
void main()
{
int a,b,sum=0;
printf("\n enter the two numbers");
scanf("%d%d",&a,&b);
sum=a+b;
if(sum%2==1)
{
printf("\n the given number is odd");
}
else
{
printf("the number is even");
}
}
