#include<stdio.h>
int factorial(int);
int main()
{
int num;
int result;
printf("Enter a number to find it's factorial\n");
scanf("%d",&num);
if(num<0)
{
printf("Factorial of negative number is not possible\n");
}
else
{
result=factorial(num);
printf("The factorial of %d is %d.\n",num,result);
}
return 0;
}
int factorial(int num)
{
if(num==0|| num==1)
{
return 1;
}
else
{
return(num * factorial(num-1));
}
}
