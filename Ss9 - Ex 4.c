#include <stdio.h>

void main ()
{
	int i, j, k;
	printf("Nhap vao so hang: ");
	scanf("%d", &i);
//////////////////////////////////////////// 
	for (j=0; j<=i; j++)
	{
		for (k=0; k<=j; k++)
			printf("*");
		if (j<i) printf("\n");
	}
//////////////////////////////////////////// 
}
