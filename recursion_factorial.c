#include<stdio.h>
int factorial(int);
int main()
{
	int n,res;
	printf("enter a number");
	scanf("%d",&n);
	res=factorial(n);
	printf("factorial=%d",res);
}
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
