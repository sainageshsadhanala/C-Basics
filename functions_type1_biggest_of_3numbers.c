#include<stdio.h>
int biggest(int,int,int);
int main()
{
	int a,b,c,big;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	big=biggest(a,b,c);
	printf("biggest=%d",big);
}
int biggest(int x,int y,int z)
{
	if(x>y && x>z)
	{
		return x;
	}
	else if(y>x && y>z)
	{
		return y;
	}
	else
	{
		return z;
	}
}
