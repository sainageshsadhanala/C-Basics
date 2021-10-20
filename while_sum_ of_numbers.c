#include<stdio.h>
int main()
{
	int small,large,sum=0,i;
	printf("enter the smallest number");
	scanf("%d",&small);
	printf("enter the largest number");
	scanf("%d",&large);
    i=small;
	while(i<=large)
	{
		sum=sum+i;
		i++;
		
	}
	printf(" sum of numbers between %d and %d is %d",small,large,sum);
}
