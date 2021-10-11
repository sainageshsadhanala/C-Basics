#include<stdio.h>
int main()
{
int tel,eng,mat,sci,soc,obt;
	printf("enter marks in telugu");
	scanf("%d",&tel);
	printf("enter marks in english");
	scanf("%d",&eng);
	printf("enter marks in maths");
	scanf("%d",&mat);
	printf("enter marks in science");
    scanf("%d",&sci);
    printf("enter marks in social");
    scanf("%d",&soc);
    obt=tel+eng+mat+sci+soc;
    printf("total marks=%d",obt);
}
	
