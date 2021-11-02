#include<stdio.h>
perfect(int);
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	perfect(n);
}
perfect(int n)
{
	int sum=0,i;
	for(i=1;i<n;i++)
	{
		if(n%i == 0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
	printf("%d is a perfect number",n);
    }
    else
    {
    	printf("%d is not a perfect number",n);
	}

}
