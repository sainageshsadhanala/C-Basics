#include<stdio.h>
void main()
{
	int a[10][10],n1,n2,i,j,sum=0;
	printf("enter no of rows,columns");
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
		   scanf("%d",&a[i][j]);
		   sum=sum+a[i][j];
		}
	}
	printf("sum of elements of matrix=%d",sum);
}
