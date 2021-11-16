#include<stdio.h>
void main()
{
	int a[10][10],n,i,j;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

