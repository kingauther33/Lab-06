#include <stdio.h>

void main ()
{
	int a, i;
	printf("Moi ban nhap 1 so bat ki: ");
	scanf("%d", &a);
	printf("===============================\n");
	printf("Bang cuu chuong cua so tren la: \n");
	for (i=1; i<=a; i++)
	{
	    printf("%d * %d = %d", a, i, a*i);
	    if (i<a)
	        printf("\n");
	}
}