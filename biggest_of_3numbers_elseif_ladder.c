#include<stdio.h>
int main()
{
	int a,b,c;
    printf("enter 3numbers");
	scanf("%d%d%d",&a,&b,&c); 
	if(a>b && a>c)
	{
		printf("%d is biggest",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is biggest",b);
	}
	else
	{
		printf("%d is biggest",c);
	}
}
