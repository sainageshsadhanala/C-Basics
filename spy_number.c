#include<stdio.h>
int main()
{
	int n,n2,sq,r,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	n2=n;
	sq=n*n;
	while(sq!=0)
	{
		r=sq%10;
		sum=sum+r;
		sq=sq/10;
	}
	if(sum==n2)
	{
		printf("%d is a spy number",n2);
	}
	else
	{
		printf("%d is not a spy number",n2);
	}
}
