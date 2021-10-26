#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	r=n%10;
	sum=sum+r;
	
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		if(n<10)
		{
			sum=sum+n;
		}
	}
	printf("sum of 1st and last digits of number=%d",sum);
}
