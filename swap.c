#include<stdio.h>
void swap1(int,int);
void swap2(int *,int *);
main()
{
int a,b;
printf("Enter 2 numbers:\n");
scanf("%d%d",&a,&b);
printf("\n------Call by value------\n");
printf("Before swapping\na=%d\n b=%d",a,b);
swap1(a,b);
printf("\nAfter swapping a=%d\nb=%d(actual parameter)",a,b);
printf("\n\n------Call by reference------\n");
printf("Before swapping\na=%d\nb=%d",a,b);
swap2(&a,&b);
printf("\nAfter swapping a=%d\nb=%d(actual parameter)",a,b);
}
void swap1(int p,int q)
{
int temp=p;
p=q;
q=temp;
printf("\np=%d,q=%d(formal)",p,q);
}
void swap2(int *x,int *y)
{
int temp1=*x;
*x=*y;
*y=temp1;
printf("x=%d y=%d(formal parameter)",*x,*y);
}

