#include <stdio.h>

void main ()
{
	int count;
	count = 1;
//////////////////////////////////////////// 
	while (count<=10)
	{
		printf("Lap lan %d", count);
		if (count<10) printf("\n");
		count++;
	}
//////////////////////////////////////////// 
	printf("\nKet thuc vong lap.");
}
