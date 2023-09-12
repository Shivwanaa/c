#include <stdio.h>
int main()
{
	float a,b,c,d,e,f;

	printf("enter 5 subject marks");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("percentage is %f%% \n",f);
	if (f>=90)
	   printf("Grade A");
	else if (80<=f<90)
	   printf("Grade B");
	else if (70<=f<80)
	   printf("Grade C");
	else if (60<=f<70)
	   printf("Grade D");
	else if (40<=f<60)
	   printf("Grade E");
	else
	   printf("Grade F");
}
