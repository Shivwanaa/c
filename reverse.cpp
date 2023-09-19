#include <stdio.h>
int main()
{
	int i,n,s=0;
	printf("enter value for n \n");
	scanf("%d",&n);
	while (n>0)
	{
	    i=n%10;
		s=10*s+i;
        n=n/10;
		
	}
printf("%d",s);	
	
}
