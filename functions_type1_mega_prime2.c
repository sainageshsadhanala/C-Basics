#include<stdio.h>
int prime(int);
int digits(int);
void main()
{
	int n,fcn,fcd;
	printf("enter a number");
   	scanf("%d",&n);
   	fcn=prime(n);
   	if(fcn==0)
   	{
   		fcd=digits(n);
   		if(fcd==0)
   		{
   		    printf("%d is a mega prime number",n);	
		}
		else
		{
			printf("%d is a prime number but not a mega prime number",n);
		}
	}
	else
	{
		printf("%d is not a prime number",n);
	}
}
int prime(int n)
{
	int i,f=0;
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
		{
		f++;
	    }
		if(f!=0)
		{
			return f;/*if f is morethan 0,then it is composite
			            and no need of further execution*/
		}
	}
	return f;//here f=0
}
int digits(int n)
{
	int r,f;
	while(n!=0)
	{
		r=n%10;
		f=prime(r);
		if(f!=0)
		{
			return f;/*if f is morethan 0,then it is composite
			            and no need of further execution*/
		}
		n=n/10;
	}
	return f;//here f=0
}
