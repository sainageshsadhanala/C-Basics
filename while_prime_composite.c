#include<stdio.h>
int main()
{
	int n,i,f=0;
	printf("enter the number");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i == 0)
		{
			f++;
			printf("%d is a factor\n",i);
		}
	i++;
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
