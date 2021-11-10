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
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
