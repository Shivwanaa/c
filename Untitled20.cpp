#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the sides of triangle \n");
	scanf("%d%d%d",&a,&b,&c);
	if (a==b && a==c)
		printf("equilateral");
	else if (a==b && (b!=c) || (b==c) && (c!=a) )
	    printf("%d",b);
