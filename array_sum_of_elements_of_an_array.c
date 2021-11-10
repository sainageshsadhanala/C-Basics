#include<stdio.h>
void main()
{
	int sum=0,a[10],i;
	printf("enter values of array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	printf("sum of elements of array=%d",sum);
}
