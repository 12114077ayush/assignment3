#include<stdio.h>
int main()
{
printf("enter an alphabet\n");
char y;
scanf("%c",&y);
int x=y;
if(x>=65&&x<=90)
printf("upper case alphabet");
else
printf("lower case alphabet");
return 0;
}
