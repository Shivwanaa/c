#include <stdio.h>
int main()
{
	int i,n,j,s;
	printf("enter n value");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{   for(s=1;s<n-i;s++)
	        printf(" ");
	    {   for(j=0;j<i;j++)
                printf("%d ",i);
				printf("\n");
			}
	}
	
}
