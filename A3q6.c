#include<stdio.h>
int main()
{
int a,b;
printf("enter two numbers");
scanf("%d%d",&a,&b);
if(a>b)
printf("%d is the greatest number",a);
else{
if(a==b)
printf("both entered number are equal to %d",a);
else
printf("%d is greatest number",b);
}
return 0;
}
