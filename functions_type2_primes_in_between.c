#include<stdio.h>
int primes_in_between(int,int);
int main()
{
	int n1,n2;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
    primes_in_between(n1,n2); 
}
int primes_in_between(int n1,int n2) 
{
	int i,j,f;
	for(i=n1;i<=n2;i++)
	{
		f=0;
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
			{
				f++;
			}
		}
		if(f==2)
		{
			printf("%d\t",i);
		}
	}
}
