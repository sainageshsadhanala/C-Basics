#include<stdio.h>
int main()
{
	int a,n,sum,i;
	printf(" enter a number");
	scanf("%d",&a);
	for(n=1;n<=a;n++)
	{
		sum=0;
	  for(i=1;i<n;i++)
    	{
		  if(n%i == 0)
		    {
			  sum=sum+i;
		    }
	    }
	  if(n==sum)
	    { 
	       printf("%d is a perfect number\n",n);
	    }
    }
}

