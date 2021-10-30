#include<stdio.h>
int main()
{
	int a=0,b=1,sum=1,n;
	printf("enter a number");
	scanf("%d",&n);
	while(sum<=n)
	{
		sum=a+b;
		a=b;
		b=sum;
		if(sum>n)
		{
			printf("next fibonacci=%d",sum);
		}
	}
}
