#include<stdio.h>
int main()
{
	int n,o=0,e=0,r,t=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n/10;
		if(r%2 == 0)
		{
			e++;
		}
		else
		{
			o++;
		}
		n=n/10;
		t++;
	}
	if(t==e)
	{
		printf("strong even");
	}
	else if(t==o)
	{
		printf("strong odd");
	}
	else
	{
		printf("mixed digits");
	}
}
