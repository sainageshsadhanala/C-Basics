#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("enter no of terms required");
	scanf("%d",&n);
		printf("%d\t%d\t",a,b);
	for(i=1;i<=n;i++)
	{
		c=a;
		a=b;
		b=b+c;
		printf("%d\t",b);
	}
}
