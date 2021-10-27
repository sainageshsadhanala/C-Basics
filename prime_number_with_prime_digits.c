#include<stdio.h>
int main()
{
	int n,n2,i,j,r,f1=0,f2;/* f2 value should be taken greater than two so the system 
	can not assign a garbage value less than 2 if you want to remove f1<=2 in the if 
	condition statement in if else ladder used at end of program */
	printf("enter a number");
	scanf("%d",&n);
	n2=n;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		{
			f1++;//factor count for n
			
		}
	}
   //printf("f1=%d",f1);
	if(f1==2)//indicates n is a prime so checking the digits
	{
		for(n=n;n!=0;n=n/10)
		{
			f2=0;//no of factors of each digit 
			r=n%10;//last digit number
			for(j=1;j<=r;j++)
			{
				if(r%j == 0)
				{
					f2++;//no of factors increases
				}
				if(f2>2 || f2<2)
				{
					break;//factors more than two means composite digit
				}
			}
		}
	}
	//printf("%d\n",f2);//factors of first composite digit where loop breaks
	if(f1==2 && f2==2)
	{
		printf("%d is prime number with prime digits",n2);
	}
	else if(f1==2 && f2!=2)
	{
		printf("%d is prime number with prime and composite digits",n2);
	}
	else
	{
	    printf("%d is composite number",n2);	
	}
}
