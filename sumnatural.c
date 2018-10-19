#include<stdio.h>
main()
{
int i,n,sum=0;
printf("Enter the number of natural numbers\n");
scanf("%d",&n);
i=0;
do
{
printf("%d",i);
sum=sum+i;
i++;
}
while(i<=n);
printf("\n sum=%d",sum);
}
