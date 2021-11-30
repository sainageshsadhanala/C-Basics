#include<stdio.h>
void main()
{
	int a[100][100],i,j,n1,n2,sum=0;
	printf("enter the no of columns and rows");
	scanf("%d%d",&n1,&n2);
	printf("enter the elements of array");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("sum of elements=%d",sum);
}
