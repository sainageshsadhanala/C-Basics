#include<stdio.h>
int main()
{
	int a,b;      
    char c;
    printf("enter the operation to be performed");
	scanf("%c",&c);
    printf("enter the 2numbers");
	scanf("%d%d",&a,&b);

	switch(c)
	{
		case '+':printf("sum=%d",a+b);
		       break;
		case '-':printf("difference=%d",a-b);
		       break;
		case '*':printf("product=%d",a*b);
		       break;
	    case '/':printf("quotient=%d",a/b);
		       break;
		case '%':printf("remainder=%d",a%b);
		       break;
		
		default:printf(" invalid input");
	}
	
}
