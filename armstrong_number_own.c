#include<stdio.h>
int main()
{
	int n,gn,r,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	gn=n;
	while(n!=0)
	{
		r=n%10;
		sum=(r*r*r)+sum;
		n=n/10;
	}
	if(gn==sum)
	{
		printf("amstrong number");
	}
	else
	{
		printf("not amstrong number");
	}
}
