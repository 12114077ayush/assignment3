#include<stdio.h>
int main()
{
float s1,s2,s3,s4,s5,per ;
printf("enter the obtained marks in sub1,sub2,sub3,sub4,sub5 respectively\n");
scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
per=(s1+s2+s3+s4+s5)/5;
if(per<33)
printf("fail");
else
    {
    if(s1>=33&&s2>=33&&s3>=33&&s4>=33&&s5>=33)
        printf("pass");
    else
        printf("fail");
    }
return 0;
}
