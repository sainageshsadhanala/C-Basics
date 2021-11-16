#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],n1,n2,i,j;
	printf("enter no of rows,columns");
	scanf("%d%d",&n1,&n2);
	printf("enter elements of 'a' matrix");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		   scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of 'b' matrix");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		   scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		   printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
