#include<stdio.h>
main()
{
int i,sum=0;
for(i=0;i<10;i++)
{
sum=sum+1;
if(i==2)
{
goto add;
}
}
add:
printf("%d",sum);
}
