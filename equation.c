#include<stdio.h>
main()
{
int count,n;
float x,y;
printf("Enter the value of x and n\n");
printf("\nX=");
scanf("%f",&x);
printf("\nN=");
scanf("%d",&n);
y=1.0;
count=1;
while(count<=n)
{
y=y*x;
count++;
}
printf("\n %f to power %d",x,n,y);
}
