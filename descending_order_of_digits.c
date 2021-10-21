#include<stdio.h>
int main()
{
	int a,b,c,d,e,i,x;
	printf("enter digits of a 5 digit number");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	for(i=0;i<=5;i++)
	{
		if(a<b)
		{
		x=a;
		a=b;
		b=x;	
		}
		if(b<c)
		{
		x=b;
		b=c;
		c=x;	
		}
		if(c<d)
		{
		x=c;
		c=d;
		d=x;	
		}
		if(d<e)
		{
		x=d;
		d=e;
		e=x;	
		}
	}
	printf("%d%d%d%d%d",a,b,c,d,e);
}
