#include<stdio.h>
int main()
{
	int n,e=0,o=0,r,t=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2 == 0)
		{
			e++;//even digit count
		}
		else
		{
			o++;//odd digit count
		}
		t++;//total digit count
		n=n/10;
	}
	if(e==t)
	{
		printf("strong even");
	}
	else if(o==t)
	{
		printf("strong odd");
	}
	else
	{
		printf("mixed digit number");
	}
	
}
