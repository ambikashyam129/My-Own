#include<stdio.h>
main()
{
int a,b,c;
printf("Enter the value of a\n");
scanf("%d",&a);
printf("Enter the value of b\n");
scanf("%d",&b);
printf("Enter the value of c\n");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("a is largest\n");
}
if(b>a&&b>c)
{
printf("b is largest\n");
}
else
{
printf("c is largest\n");
}
}
