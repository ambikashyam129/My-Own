#include<stdio.h>
void main()
{
int sub1,sub2,sub3,sub4,sub5,total;
printf("sub1 mark\n");
scanf("%d",&sub1);
printf("sub2 mark\n");
scanf("%d",&sub2);
printf("sub3 mark\n");
scanf("%d",&sub3);
printf("sub4 mark\n");
scanf("%d",&sub4);
printf("sub5 mark\n");
scanf("%d",&sub5);
if(sub1>35&&sub2>35&&sub3>35&&sub4>35&&sub5>35)
{
total=sub1+sub2+sub3+sub4+sub5;
printf("total=%d",total);
}
else if(total>350)
{
printf("distinction\n");
}
else if(total<350&&total>300)
{
printf("first class\n");
}
else if(total<300&&total>250)
{
printf("second class\n");
}
else
{
printf("average\n");
}
}





