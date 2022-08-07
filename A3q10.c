#include<stdio.h>
int main()
{float s,c,per;
printf("enter cost price :- ");
scanf("%f",&c);
printf("enter selling price :- ");
scanf("%f",&s);
per= ((s-c)/c)*100;
if(per>0)
printf("profit percent %f",per);
if(per<0)
printf("loss percent %f",-per);
if(per==0)
printf("no profit and loss");
return 0;
}
