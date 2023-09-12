#include <stdio.h>
int main()
{
	float a,b;
	printf("enter number of units");
	scanf("%f",&a);
	if (a<=100)
	   b=a*2;
	else if (100<a<250)
	   b=a*5;
	else
	   b=a*7;
	printf("elec bill is %f",b);
	   
	
	
}
