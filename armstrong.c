#include<stdio.h>
main()
{
int num,n,rem;
int cube=0,sum=0;
printf("Enter a number\n");
scanf("%d",&num);
n=num;
while(n>0)
{
rem=n%10;
cube=rem*rem*rem;
sum=sum+cube;
n=n/10;
}
if(num==sum)
printf("%d is armstrong number",num);
else
printf("%d is not armstrong number",num);
}
