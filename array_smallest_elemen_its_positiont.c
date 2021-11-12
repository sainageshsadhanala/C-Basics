#include<stdio.h>
void main()
{
	int a[100],n,i,small,position;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	for(i=0;i<n;i++)
	{
		if(small>a[i])
		{
			small=a[i];
			position=i;
		}
	}
	printf("the smallest element is %d with index number %d",small,position);
}
