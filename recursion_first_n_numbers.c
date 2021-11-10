#include<stdio.h>
int main()
{
	int n,r;
	printf("enter a number");
	scanf("%d",&n);
	r=rec(n);
	printf("%d",r);
}
int rec(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		printf("%d\t",n);
		return rec(n-1);
	}
}
