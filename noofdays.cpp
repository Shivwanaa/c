#include <stdio.h>
int main()

{
	int a,b;
	printf("enter year and month");
	scanf("%d%d",&a,&b);
	if (b==2)
	    if (a%4==0 && (a%400==0 || a%100!=0))
	        printf("29");
	    else
	        printf("28");
	else if (b==4 || b==9 || b==6 || b==11)
	    printf("30");
	else
	    printf("31");
	    

}
