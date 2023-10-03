#include <stdio.h>
int main()
{
	int i,n,j;
	printf("enter n value");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(j=1;j<=n-i;j++) 
			printf("%d",j);
			printf("\n");
	} 
  
}
