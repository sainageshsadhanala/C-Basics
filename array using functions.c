#include<stdio.h>
void main()
{
	int n;
	printf("enter no of elements of array");
	scanf("%d",&n);
	read_array(n);
	print_array(n);
}
read_array(int n)
{
	int a[100],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
print_array(int n)
{
	int a[100],i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
