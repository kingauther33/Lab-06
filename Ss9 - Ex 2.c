#include <stdio.h>

void main ()
{
	int num;
	printf("Cac so chan tu 1 den 25 la: ");
	for	(num = 2; num <=25; num += 2)
	{
		printf("%d", num);
		if (num < 24) 
			printf(", ");
	}
}
