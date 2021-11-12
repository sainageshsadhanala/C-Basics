#include<stdio.h>
void main()
{
	int a[100],n,i,big=0,position;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(big<a[i])
		{
			big=a[i];
			position=i;
		}
	}
	printf("the biggest element is %d with index number %d",big,position);
}
