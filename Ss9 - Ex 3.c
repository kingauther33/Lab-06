#include <stdio.h>

void main ()
{
	int i, j, max;
	printf("Nhap vao gia tri lon nhat: ");
	scanf("%d", &max);
	for (i=0, j=max; i<=max; i++, j--)
		printf("\n%d + %d = %d", i, j, max);
}
