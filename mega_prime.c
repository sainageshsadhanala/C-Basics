#include<stdio.h>
int main()
{
	int n,n2,r,i,j,f1=0,f2=0;
	printf("enter a number");
	scanf("%d",&n);
	n2=n;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			f1++;//factor count for given number
		}
	}
	if(f1==2)
	{
		for(n=n;n!=0;n=n/10)
		{
			r=n%10;
			f2=0;
			for(j=1;j<=r;j++)
			{
				if(r%j == 0)
				{
				f2++;
			    }
			}
			//printf("%d",f2);
			if(f2<2 || f2>2)
			{
				break;
			}
		}
	}
	if(f1==2 && f2==2)
	{
		printf("%d is a mega prime",n2);
	}
	else if(f1==2 && f2!=2)
	{
		printf("%d is a normal prime",n2);
	}
	else
	{
		printf("%d is a composite number",n2);
	}
}
