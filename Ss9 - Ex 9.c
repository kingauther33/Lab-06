#include <stdio.h>

void main ()
{
	int num1, num2;
	num2 = 0;
//////////////////////////////////////////// 
	do {
	printf("Enter a number : ");
	scanf("%d",&num1);
	printf( "No. is %d",num1);
	num2++;
	printf("\n");
	} while(num1 != 0);
//////////////////////////////////////////// 
	printf("--------------------------");
	printf("\nThe total numbers entered were %d",--num2);
}
