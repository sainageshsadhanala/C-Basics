#include<stdio.h>
int sum(int);
void main()
{
	int n,s;
	printf("enter a number");
   	scanf("%d",&n);
   	s=sum(n);
   	printf("sum of first %d numbers is %d",n,s);
}
int sum(n)
{
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
