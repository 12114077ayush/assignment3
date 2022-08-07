#include<stdio.h>
int main()
{ printf("enter a character");
char c;
scanf("%c",&c);
int x=c;
if(x>0)
{
if(x>=48&&x<=57||x>=97&&x<=122||x>=65&&x<=90L)
{
if(x>=65&&x<=90)
printf("upper case alphabet is entered");
if(x>=97&&x<=122)
printf("lower case alphabet is entered");
if(x>=48&&x<=57)
printf("digit is entered");
}
else
printf("special character is entered");
}
return 0;
}
