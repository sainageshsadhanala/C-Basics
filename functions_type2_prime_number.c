#include<stdio.h>
prime(int);
int main()
{
	int n,p;
	printf("enter a number");
	scanf("%d",&n);
	prime(n);
}
prime(int n)
{
	int i,f=0;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			f++;
		}
	}
	if(f==2)
	{
     	printf("%d is a prime number",n);	
	}
	else
	{
		printf("%d is not a prime number",n);
	}
}
