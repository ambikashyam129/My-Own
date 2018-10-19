#include<stdio.h>
main()
{
int y;
printf("Enter the year\n");
scanf("%d",&y);
if((y%4)==0)
{
printf("%d is a leap year\n",y);
}
else
{
printf("%d is not leap year\n",y);
}
}
