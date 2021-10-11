#include<stdio.h>
int main()
{
int tel,eng,mat,sci,soc,obt;
float per;
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
    printf("total marks=%d\n",obt);
    per=(obt*100)/500;
	//max marks in each subject are assumed to be 100
    printf("percentage=%.2f\n",per);
    if(per>=90)
    {
    	printf("grade A");
	}
	else if(per>=80 && per<90)
    {
    	printf("grade B");
	}
	else if(per>=70 && per<80)
    {
    	printf("grade C");
	}
	else if(per>=60 && per<70)
    {
    	printf("grade D");
	}
	else if(per>=50 && per<60)
    {
    	printf("grade E");
	}
	else
	{
		printf("fail");
		
	}
}
