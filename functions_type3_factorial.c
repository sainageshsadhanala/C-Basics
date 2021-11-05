#include<stdio.h>
int factorial();
void main()
{
	int fact;
	fact=factorial();
	printf("factorial=%d",fact);
}
int factorial()
{
	int n,n2,fact=1,i;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
