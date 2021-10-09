#include<stdio.h>
int main()
{
	int a,b;
    printf("enter year and no of backlogs");
	scanf("%d%d",&a,&b);
    if(a==4 && b==0)
    {
    	printf("selected");
	}
	else
	{
		printf("not selected");
    }
}
