#include<stdio.h>
add();
void main ()
{
	add();
}
add()
{
	int a,b,c;
	printf("enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
    printf("sum=%d",c);
}
