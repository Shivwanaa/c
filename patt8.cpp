#include <stdio.h>
int main()
{
	int i,n,j;
	printf("enter n value");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(j=1;j<i+1;j++) 
			printf("%d",i);
			printf("\n");
	} 
  
}

