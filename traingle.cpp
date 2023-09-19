#include <stdio.h>
int main()

{
	int a,b,c;
	printf("enter sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	if ((a==b) && (b==c))
	    printf("equilateral");
	else if ((a==b && b!=c) || (b==c && c!=a) || (a==c && b!=c))
	    printf("isoceles");
	else
	    printf("scalene");
}
