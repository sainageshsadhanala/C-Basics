#include<stdio.h>
int main()
{
	int i,j,s,e,f;
	printf("enter starting number");
	scanf("%d",&s);
	printf("enter ending number");
	scanf("%d",&e);
	for(i=s;i<=e;i++)
	{
		f=0;
		for(j=1;j<=i;j++)
		{
			if(i%j == 0)
			{
				f++;
			}
		}
		if(f==2)
		{
			printf("%d\t",i);
		}
	}
	 
}
