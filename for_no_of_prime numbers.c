#include<stdio.h>
int main()
{
	int a,n,i,f=0;
	printf("enter the number");
	scanf("%d",&a);
	for(n=1;n<=a;n++)
	{
	f=0;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			f++;
		}
		
    }
    if(f==2)
    {
	
    printf("%d is a prime\n",n);
   
	}
	}

}
