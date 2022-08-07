#include<stdio.h>
int main()
{ int a,b,c,d;
printf("enter the coefficients of x^2,x and x respectively.\n");
scanf("%d%d%d",&a,&b,&c);
d= b*b-4*a*c;
if(d>0)
printf("roots are real and disctinct");
if(d==0)
printf("roots are real and equal");
if(d<0)
printf("roots are imaginary");
return 0;
}
