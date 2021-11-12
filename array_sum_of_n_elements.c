#include<stdio.h>
void main()
{
	int a[100],i,n,sum=0;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of n elements=%d",sum);
}
