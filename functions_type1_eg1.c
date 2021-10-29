 #include<stdio.h>
 int add(int,int);
 int main()
 {
 	int a,b,sum;
 	printf("enter two numbers");
 	scanf("%d%d",&a,&b);
 	sum=add(a,b);
 	printf("sum=%d",sum);
 }
 int add(int x,int y)
 {
 	int z;
 	z=x+y;
 	return z;
 }
