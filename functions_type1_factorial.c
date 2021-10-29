#include<stdio.h>
int factorial(int);
int main()
{
	int n,f;
	printf("enter a number");
	scanf("%d",&n);
	f=factorial(n);//function call
	printf("factoraial=%d",f);
}
int factorial(int a)
{
	int fact=1,i;
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
			return fact;
	}
	return fact;
}
