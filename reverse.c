#include<stdio.h>
main()
{
typedef int number;
number rev=0,n;
printf("Enter the number\n");
scanf("%d",&n);
while(n>0)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("Reverse=%d",rev);
}
