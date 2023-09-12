#include <stdio.h>
#include <math.h>
int main()
{
	float p,r,t;
	printf("enter principal,rate,time");
	scanf("%f%f%f",&p,&r,&t);
	printf("simple interest is %f",(p*r*t)/100);
	printf("\n compound interest is %f",(p*(pow((1+(r/100)),t))-p));
}
	
