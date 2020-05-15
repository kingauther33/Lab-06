#include <stdio.h>

void main ()
{
	int count = 0;
//////////////////////////////////////////// 	
	while (count<100)
	{
		printf("Help this never ends :((((\n");
		count+=10;
		printf("\t %d", count);
		count-=10;
		printf("\t %d", count);
		printf("\nCtrl + C will help");
	}
//////////////////////////////////////////// 
}
