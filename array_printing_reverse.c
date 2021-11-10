#include<stdio.h>
void main()
{
	int n,arr[10],i;
	printf("enter a number below 10");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
