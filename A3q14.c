int main()
{
int x;
printf("enter a number ");
scanf("%d",&x);
if(x%7==0&&x%3==0)
printf("entered number is both divisible by 7 and 3");
else
{
    if (x%7==0&&x%3!=0)
        printf("entered number is just divisible by 7");
    if (x%7!=0&&x%3==0)
        printf("entered number is just divisible by 3");
    if(x%7!=0&&x%3!=0)
        printf("entered number is not divisible by 7 and 3");
}
return 0;
}
