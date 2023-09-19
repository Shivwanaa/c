#include <stdio.h>
int main()
{
	int a=0,b=1,i,n,s;
	printf("enter value for n \n");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	 
	
	{
		s=(a+b);
		a=b;
		b=s;
	}
printf("%d",s);
}
