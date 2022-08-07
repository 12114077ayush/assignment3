#include<stdio.h>
int main()
{
int x;
printf("enter a nmuber");
scanf("%d",&x);
if(x<0)
printf("entered number is negative");
if(x>0)
printf("entered number is positive");
if(x==0)
printf("entered number is neutral ");
return 0;
}
