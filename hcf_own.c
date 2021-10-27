#include<stdio.h>
int main()
{
	int a,b,i;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a==0 || b==0)
	{
		printf("invalid input");
	}
     if(a<b)
     {
     	i=a;
	}
	else
	{
		i=b;
	}
	
	while(i!=0)
	{
		if(a%i==0 && b%i==0)
		{
			printf("hcf=%d\n",i);
			break;
		}
		i--;
     }

     
}
