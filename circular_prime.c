#include<stdio.h>
int main()
{
	int n,f1=0,f2=0,i,j,r,rev=0,n2;
	printf("enter a number");
	scanf("%d",&n);
	n2=n;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			f1++;// no of factors for n
	    }
	}
	printf("no of factors for %d=%d\n",n,f1);
    for(n=n;n!=0;n=n/10)
		{
			r=n%10;
			rev=rev*10+r;	
		}
	printf("reverse of number %d=%d\n",n2,rev);
 	for(j=1;j<=rev;j++)
	    {
		  if(rev%j == 0)
		   {
			 f2++;
		    }
	    }
	printf("no of factors for reverse number%d=%d\n",rev,f2);
    
	if(f1<=2 && f2<=2)
	{
		printf("%d is a circular prime",n2);
	}
	else if(f1<=2 && f2>2)
	{
		printf("%d is a prime number and not a circular prime",n2);
	}
	else
	{
		printf("%d is a composite number",n2);
	}
	
}
