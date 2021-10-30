#include<stdio.h>
int main()
{
	int n,e=0,o=0,r;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2 == 0)
		{
			e++;
		}
		else
		{
			o++;
		}
		n=n/10;
	}
	printf("no of even digits=%d\nno of odd digits=%d",e,o);
}
