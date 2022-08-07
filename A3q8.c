#include<stdio.h>
int main()
{
int a,b;
printf("enter a valid year");
scanf("%d",&a);
b=a%4;
if(b==0)
printf("entered year is a leap year");
else
printf("entered year is not a leap year");
return 0;
}
