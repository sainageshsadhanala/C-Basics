#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping,the numbers are%d,%d",a,b);
}
