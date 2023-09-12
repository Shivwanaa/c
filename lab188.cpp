

#include <stdio.h>
int main()
{
	float a;
	printf("enter dist in km");
	scanf("%f",&a);
	printf("%f km is %f m, %f cm, %f mm",a,a*1000,a*100000,a*1000000);
}
