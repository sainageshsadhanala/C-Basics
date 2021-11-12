#include<stdio.h>
void main()
{
	int a[100],i,n;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
	{
		if(a[i]%2 != 0)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
	}
}
