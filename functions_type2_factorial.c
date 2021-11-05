#include<stdio.h>
factorial(int);
void main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	factorial(n);
}
factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial=%d",fact);
}
