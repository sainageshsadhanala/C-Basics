#include<stdio.h>
int sum(int);
int main()
{
	int n,res;
	printf("enter a number");
	scanf("%d",&n);
	res=sum(n);
	printf("sum=%d",res);
}
int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n+sum(n-1);
	}
}
