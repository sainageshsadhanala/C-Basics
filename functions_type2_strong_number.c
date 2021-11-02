#include<stdio.h>
strong(int);
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	strong(n);
}
strong(int n)
{
	int r,i,temp,factorial=1,sum=0;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		factorial=1;
		for(i=1;i<=r;i++)
		{
			factorial=factorial*i;
		}
		//printf("%d\n",factorial);
		sum=sum+factorial;
		n=n/10;
	}
	if(sum==temp)
	  {
     	printf("%d is a strong number",temp);
      }
    else
      {
    	printf("%d is not a strong number",temp);
	  }

}
