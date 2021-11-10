#include<stdio.h>
void main()
{
	int a[10],i;
	printf("enter values of array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2 == 0)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
	}
}
