#include<stdio.h>
int factor_count();
void main()
{
	int f;
	f=factor_count();
	if(f==2)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
}
int factor_count()
{
	int n,i,f=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			f++;
		}
	}
	return f;
}
