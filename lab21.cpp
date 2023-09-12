#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
		printf("A");
	else if (b>c)
	    printf("B");
	else
	    printf("C");
}
	
	
