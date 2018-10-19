#include<stdio.h>
main()
{
int f1=0,f2=1,f3,i=3,length;
printf("Enter the length of the fibonocci\n");
scanf("%d\t%d",f1,f2);
while(i<=length)
{
f3=f1+f2;
printf("\t%d",f3);
f1=f2;
f2=f3;
i=i+1;
}
}

