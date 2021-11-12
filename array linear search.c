#include<stdio.h>
void main()
{
	int a[100],n,num,i,p,nf;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to be searched");
	scanf("%d",&num);
	nf=n;
	for(i=0;i<n;i++)
	{
		if(num==a[i])
		{
			printf("element found at index number %d\n",i);
			nf=i;
		}
	}
	if(nf==n)
	{
		printf("element not found");
	}
}
