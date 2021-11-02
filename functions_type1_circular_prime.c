#include<stdio.h>
int factor_count(int);
int reverse_number(int);
int main()
{
	int n,f,rev;
	printf("enter a number");
	scanf("%d",&n);
	f=factor_count(n);
	if(f==2)
	{
		rev=reverse_number(n);
		f=factor_count(rev);
		if(f==2)
		{
			printf("%d is a circular prime",n);
		}
		else
		{
		    printf("%d is not a circular prime",n);	
		}
	}
	else
	{
		printf("%d is a composite number",n);
	}
}
int factor_count(int n)
{
	int f=0,i;
	for(i=1;i<=n;i++)
    {
    	if(n%i == 0)
    	{
    		f++;
		}
	}
	return f;
}
int reverse_number(int n)
{
	int sum=0,r;
	while(n!=0)
	{
	  r=n%10;
	  sum=sum*10+r;
 	  n=n/10;	
	}
	return sum;
}
