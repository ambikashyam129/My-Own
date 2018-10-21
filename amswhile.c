#include<stdio.h>
main()
{
int num,orignum,rem,res=0,n=0;
printf("enter an integer");
scanf("%d",&num);
orignum=num;
while(orignum!=0)
{
orignum/=10;
++n;
}
orignum=num;
while(orignum!=0)
{
rem=orignum%10;
res+=pow(rem,n);
orignum/=10;
}
if(res==num)
printf("%d is an amstrong num",num);
else
printf("%d is not an amstrong num",num);
}

