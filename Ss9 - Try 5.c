#include <stdio.h>

void main ()
{
	int i, j, num;
	printf("Nhap so dong muon hien thi dau *: ");
	scanf("%d", &num);
	printf("\n======================\n");
//////////////////////////////////////////// 
	for (i = 1; i<=num; i++)
	{
		for (j=1; j<=num+1-i; j++)
			printf("*");
		printf("\n");
	}
//////////////////////////////////////////// 
}
