#include<stdio.h>
int factor_count(int);
int main()
{
	int n,f;
    printf("enter a number");
   	scanf("%d",&n);
   	f=factor_count(n);
   	if(f==2)
   	{
   		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
}
int factor_count(int n)
{
	int f=0,i;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			f++;
		}
	}
	return f;
}
