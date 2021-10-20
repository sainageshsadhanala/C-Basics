#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			printf("%d is a factor\n",i);
			f++;
		}
		
	}
	printf("no of factors=%d\n",f);
	if(f>2)
	{
		printf("%d is a composite number",n);
		
	}
	else
	{
		printf("%d is a prime number",n);
	}
}
