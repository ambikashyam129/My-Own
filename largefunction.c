#include <stdio.h>
int large(int a,int b, int c)
{
	int largest=0;
	if(a>b && a>c)
		largest=a;
	else if(b>a && b>c)
		largest=b;
	else
		largest=c;
	return largest;
}
int main()
{
	int a,b,c;
	printf("Enter three numbers:\n ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Largest number is: %d\n",large(a,b,c));
	return 0;
}

