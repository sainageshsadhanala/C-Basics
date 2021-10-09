#include<stdio.h>
int main()
{
	int p,t,r,i;
    printf("enter principle amount");
	scanf("%d",&p);
    printf("enter rate of interest");
    scanf("%d",&r);
    printf("enter time period");
    scanf("%d",&t);
    i=(p*t*r)/100;
    printf("simple interest=%d",i);
}
