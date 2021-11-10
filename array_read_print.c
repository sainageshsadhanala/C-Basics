#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		scanf("%d\t",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
}

