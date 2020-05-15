#include <stdio.h>

void main ()
{
	int i, a;
	i = 0;
	a = 10;
//////////////////////////////////////////// 
	while(i < 100 && a > 5)
	{
		printf("\nVong lap %d: ", i+1);
		i++;
		printf("\ni = %d", i);
		a-= 2;
		printf("\na = %d", a);
		printf("\n-----------------------\n");
	}
//////////////////////////////////////////// 
	printf("\nKet thuc ctrinh");
}
