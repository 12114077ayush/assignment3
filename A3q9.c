#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
 {
 if(a>c)
 printf("%d number is the greatest among three",a);
  else
 printf("%d number is the greatest among three",c);
 }
if(b>a)
{
 if(b>c)
 printf("%d number is the greatest among three",b);
 else
 printf("%d number is the greatest among three",c);
}
if(a==b)
{
if(b>c)
 printf("%d number is the greatest among three",b);
else
  if(b!=c)
   printf("%d number is the greatest among three",c);
  else
   printf("all three numbers are equal");
}
return 0;
}
