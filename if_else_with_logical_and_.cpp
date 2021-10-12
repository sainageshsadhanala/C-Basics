#include<stdio.h>
int main()
{
	int p;
    printf("enter number");
	scanf("%d",&p); 
	if((p%5 ==0)&&(p%7 ==0))
	{
		printf("number divisible by 7 and 5");
	}
	else
	{
		printf("not divisible by 5 and 7");
	}
}
