#include<stdio.h>
void main()
{
	int a[100][100],i,j,n1,n2,l1,l2;
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
	if(a[1][1]>a[1][2])
	{
		l1=a[1][1];
		l2=a[1][2];
	}
	else
	{
		l1=a[1][2];
		l2=a[1][1];
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(l1<a[i][j])
			{
				l2=l1;
				l1=a[i][j];
			}
			else if(l2<a[i][j])
			{
				l2=a[i][j];
			}
			else
			{
				
			}
		}
	}
	printf("second largest=%d",l2);
}
