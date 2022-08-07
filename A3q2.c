#include<stdio.h>
int main()
{
int a, c;
printf("enter a number");
scanf("%d",&a);
c=a%5;
if(c==0)
printf("entered number is divisible by 5");
else
printf("entered number is not divisible by 5");
return 0;
}
