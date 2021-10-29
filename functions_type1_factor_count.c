#include<stdio.h>
int main()
{
	int n,fc;
	printf("enter a number");
	scanf("%d",&n);
	fc=factorcount(n);
	printf("factor count=%d",fc);
}
int factorcount(int x)
{
	int i,f=0;
	for(i=1;i<=x;i++)
	{
		if(x%i == 0)
		{
			//printf("%d is a factor",i);
			f++;
		}
	}
	return f;
}
