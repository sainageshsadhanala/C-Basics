#include<stdio.h>
int main()
{
	int i,f,n,r,sum=0,str;
	printf(" enter a number");
	scanf("%d",&n);
	str=n;
	for(n=n;n!=0;n=n/10)
	{
		f=1;
	  r=n%10;
	  for(i=1;i<=r;i++)
	  {
	  	f=f*i;
	  	//printf("%d\t",f);
	  }
	  sum=sum+f;
	  	//printf("%d\t",sum);
	  
	}
	if(str==sum)
	{
		printf("%d is a strong number",str);
		
	}
	else
	{
		printf("%d is a not a strong number",str);
	}
}
