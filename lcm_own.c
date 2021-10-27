#include<stdio.h>
int main()
{
	int a,b,i=1;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a==0 || b==0)
	{
		printf("invalid input");
	}

	while(i!=0)
	{
		if(i%a==0 && i%b==0)
		{
			printf("lcm=%d",i);
			break;
		}
		i++;
	}
}
