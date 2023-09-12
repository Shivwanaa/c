#include <stdio.h>
int main()
{
	float a,b,c,d,e,f;

	printf("enter 5 subject marks");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("percentage is %f %%",f);
}
