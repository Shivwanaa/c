#include <stdio.h>
int main()
{
	int i,n,j,s;
	printf("enter n value");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{   for(s=0;s<n-1-i;s++)
	        printf(" ");
	    {   for(j=0;j<(2*i+1);j++)
                printf("*");
				printf("\n");
			}
	}
	for(int i=0;i<(n-1);i++)
	{   for(s=0;s<i+1;s++)
	        printf(" ");
	    {   for(j=0;j<(2*(n-1)-2*i-1);j++)
                printf("*");
				printf("\n");
			}
}}
