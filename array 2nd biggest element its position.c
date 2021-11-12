#include<stdio.h>
void main()
{
	int n,a[100],big1,big2,p1,p2,i;
	printf("enter no of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	big1=a[1];
	big2=a[1];
	p1=0;
	p2=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>big1)
		{
			big2=big1;
			big1=a[i];
			p2=p1;
			p1=i;
		}
		else if(a[i]>big2)
		{
			big2=a[i];
			p2=i;
		}
		else
		{
			
		}
	}
	printf("second largest element=%d\nindex number=%d",big2,p2);
}
