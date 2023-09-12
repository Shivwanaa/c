#include <stdio.h>
int main()
{
	float b,r,h,s;
	printf("enter basic salary and region");
	scanf("%f%f",&b,&r);
	if (r==1)
	   h=(b*0.27);
	else if (r==2)
	   h=(b*0.24);
	else if (r==3)
	   h=(b*0.16);
	else
	   h=(b+0.12);
	printf("sal of employee is %f",b+(b*0.08)+(b*0.44)+h);
	   	    
}
