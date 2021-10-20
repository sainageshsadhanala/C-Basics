#include<stdio.h>
int main()
{
	int i,n;
	printf(" enter a number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2 == 0)
		{
		
		printf("%d is even\n",i);
	    }
	    else
	    {
	    	printf("%d is odd\n",i);
		}
		i++;
    }
}



