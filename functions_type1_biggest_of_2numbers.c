#include<stdio.h>
int biggest(int,int);
int main()
{
	int a,b,big;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	big=biggest(a,b);
	printf("biggest=%d",big);
}
int biggest(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
