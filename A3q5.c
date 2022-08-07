#include<stdio.h>
int main()
{ int a;
printf("enter a number");
scanf("%d",&a);
if(a/1000==0)
{
if(a/100==0)
{
if(a/10==0)
printf("entered number is not 3 digit");
else
printf("entered number is not 3 digit");
}
else
printf("entered number is  3 digit");
}
else
printf("entered number is not 3 digit");
return 0;
}
