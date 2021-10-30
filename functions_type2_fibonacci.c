#include<stdio.h>
fibonacci(int,int,int);
int main()
{
	int n1,n2,ns;
	printf("enter starting digits of series");
	scanf("%d%d",&n1,&n2);
	printf("enter no of steps required");
	scanf("%d",&ns);
	fibonacci(n1,n2,ns);
	
}
fibonacci(int a,int b,int c)
{
	int i,sum;
	printf("%d\t%d\t",a,b);
	for(i=3;i<=c;i++)/*i=3 is taken as first two terms are already printed 
	                  so two terms are reduced*/
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d\t",sum);
	}
}
