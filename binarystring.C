#include<stdio.h>
#include<conio.h>
void main()
{
int a[100];  int i,count;
printf("\n enter the NUM");
for(i=0;i<=100;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<100;i++)
{
if(a[i]%10==0/a[i]%10==1)
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
  getch();
}
