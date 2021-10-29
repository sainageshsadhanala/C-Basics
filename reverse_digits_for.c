#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(n=n;n!=0;n=n/10)
	{
		r=n%10;
		sum=sum*10+r;
		
	}
	printf("reverse of number=%d",sum);
}
