#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],n1,n2,i,j,sum=0;
	printf("enter no of rows,columns");
	scanf("%d%d",&n1,&n2);
	if(n1!=n2)
	{
		printf("transpose is only for square matrix");
	}
    else
	{
		printf("enter elements of matrix");
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
		   b[i][j]=a[j][i];
		}
	}	
	printf("given matrix\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		   printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("transpose of matrix\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		   printf("%d ",b[i][j]);
		}
		printf("\n");
	}
    }
}

