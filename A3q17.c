#include<stdio.h>
int main()
{
printf("enter the sides of triangles\n");
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
if(a+b>c)
printf("valid triangle");
else
printf("invalid triangle");
return 0;
}

