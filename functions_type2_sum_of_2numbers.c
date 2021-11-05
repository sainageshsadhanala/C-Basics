#include<stdio.h>
add(int,int);//function declaration
void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	add(a,b);
}
add(int x,int y)
{
	int sum;
	sum=x+y;
	printf("sum=%d",sum);
}
