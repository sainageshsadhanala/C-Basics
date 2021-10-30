#include<stdio.h>
int main()
{
	int n1,n2,t=2,lcm=1,i;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	while(n1>=t && n2>=t)
	{
		if(n1%t == 0 && n2%t == 0)
		{
			lcm=lcm*t;
			n1=n1/t;
			n2=n2/t;
		}
		else
		{
			t++;
		}
	}
	lcm=lcm*n1*n2;
	printf("lcm=%d",lcm);
}
