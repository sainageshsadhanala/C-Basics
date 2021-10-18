#include<stdio.h>
int main()
{
	int i,s=0,n;
	printf("enter a number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2 != 0)
		{
			s=s+i;
		}
	}
	printf("sum of odd numbers=%d",s);
}
