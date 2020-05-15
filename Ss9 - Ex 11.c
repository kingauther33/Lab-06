#include <stdio.h>

void main ()
{
	int num;
	
	lab1:
		printf("Nhap num: ");
	scanf("%d", &num);
	if (num == 1)
		goto lab2;
	else
		goto lab1;
	lab2:
		printf("Ket thuc ctrinh");
}
