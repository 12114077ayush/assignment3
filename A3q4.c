#include<stdio.h>
int main()
{
int a,b;
printf("enter a number\n");
scanf("%d",&a);
b=a/2;
b=a-2*b;
if(b==0)
printf("entered number is even ");
else
printf("entered number is odd");
return 0;
}
