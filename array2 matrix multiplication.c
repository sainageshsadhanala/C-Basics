#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],c[100][100],i1,i2,j1,j2,m1,n1,m2,n2,sum=0;
	printf("enter the no of columns and rows of first matrix");
	scanf("%d%d",&m1,&n1);
	printf("enter the elements of 1st matrix");
	for(i1=0;i1<m1;i1++)
	{
		for(j1=0;j1<n1;j1++)
		{
			scanf("%d",&a[i1][j1]);
		}
	}
	printf("enter the no of columns and rows of 2nd matrix");
	scanf("%d%d",&m2,&n2);
	printf("enter the elements of 2nd matrix");
	for(i2=0;i2<m2;i2++)
	{
		for(j2=0;j2<n2;j2++)
		{
			scanf("%d",&b[i2][j2]);
		}
	}
	if(n1==m2)
	{
		for(i1=0;i1<m1;i1++)
		{
			
			for(j2=0;j2<n2;j2++)
			{
				sum=0;
				for(j1=0;j1<m2;j1++)
				{
					sum=a[i1][j1]*b[j1][j2];
					c[i1][j2]=c[i1][j2]+sum;
				}
			}
		}
		for(i2=0;i2<m2;i2++)
	    {
		    for(j2=0;j2<n2;j2++)
		    {
			    printf("%d\t",c[i2][j2]);
		    }
		    printf("\n");
	    }
	}
	else
	{
		printf("invalid input");
	}
}

