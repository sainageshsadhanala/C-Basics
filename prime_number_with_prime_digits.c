#include<stdio.h>
int main()
{
	int n,n2,i,j,r,f1=0,f2;
	printf("enter a number");
	scanf("%d",&n);
	n2=n;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			f1++;
		}
	}
    //printf("f1=%d",f1);
	if(f1==2)
	{
		for(n=n;n!=0;n=n/10)
		{
			f2=0;//no of factors of each digit 
			r=n%10;//last digit number
			for(j=1;j<=r;j++)
			{
				if(r%j == 0)
				{
					f2++;
				}
				if(f2>2)
				{
					break;
				}
			}
		}
	}
	if(f2<=2)
	{
		printf("%d is prime number with prime digits",n2);
	}
	else if(f1==2 && f2>2)
	{
		printf("%d is prime number with prime and composite digits",n2);
	}
	else
	{
	    printf("%d is composite number",n2);	
	}
}
