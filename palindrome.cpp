#include <stdio.h>
int main()
{
	int i,n,s=0,b;
	printf("enter value for n \n");
	scanf("%d",&n);
	b=n;
	while (b>0)
	{
	    i=b%10;
		s=10*s+i;
        b=b/10;
		
	}

if (n==s)
    printf("palindrome");
else
    printf("not a palindrome");
	
}
