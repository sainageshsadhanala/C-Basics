#include<stdio.h>
int main()
{
	int n,i,j,f;
	printf("enter a number");
	scanf("%d",&n);
	for(i=n;i>=n;i++)
	{
		f=0;
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
			{
		      f++;	
	    	}
		}
		if(f==2)
		{
			break;
		}
	}
	printf("next prime number=%d",i);
}
