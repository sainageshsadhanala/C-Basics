#include<stdio.h>
int factor_count(int);
void main()
{
    int n,fc,r,temp;
    printf("enter a number");
   	scanf("%d",&n);	
   	temp=n;
   	fc=factor_count(n);
   	if(fc==2)
   	{
   		while(n!=0)
   		{
	   	r=n%10;
	   	fc=factor_count(r);
	   	if(fc!=2)
	    {
	    	printf("%d is prime number but not mega prime",temp);
	    	break;
		}
		n=n/10;
	    }
	    if(fc==2)
	    {
	    	printf("%d is a mega prime",temp);
		}
	}
	else
	{
		printf("%d is a composite number",temp);
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
