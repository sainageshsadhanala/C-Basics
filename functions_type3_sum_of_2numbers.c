#include<stdio.h>
int add();
void main ()
{
	int res=0;
	res=add();
	printf("result=%d",res);
}
int add()
{
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
