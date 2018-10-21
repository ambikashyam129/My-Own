#include <stdio.h>
int revNum(int num)
{
	int sum=0,rem;
	while(num > 0)
	{
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}

	return sum;
}

int main()
{
	int n;
	printf("\nEnter an integer number :\n");
	scanf("%d",&n);

	printf("\nReverse Number is : %d\n",revNum(n));
	return 0;
}
