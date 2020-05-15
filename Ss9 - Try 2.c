#include <stdio.h>

void main ()
{
	int num1, num2, i, tong;
	tong = 0;
	input:
	{
		printf("Nhap 2 so num1 va num2: ");
		scanf("%d %d", &num1, &num2);
	}
//////////////////////////////////////////// 
	if (num1 < num2)
	{
		printf("Cac so le trong num1 va num2 la:\n");
		for (i= num1+1; i<num2; i+=1)
			if (i%2 == 1)
			{
				printf("%d ", i);
				tong += i;
			}	
		printf("\n====================");
		printf("\nTong cac so le trong num1 va num2 la: %d", tong);	
	}
	else if (num1 > num2)
	{
		printf("Cac so le trong num1 va num2 la:\n");
		for (i= num2+1; i<num1; i+=1)
			if (i%2 == 1)
			{
				printf("%d ", i);
				tong += i;
			}
		printf("\n====================");	
		printf("\nTong cac so le trong num1 va num2 la: %d", tong);
	}
	else
	{
		printf("Num1 bang Num2, Moi nhap lai\n");
		printf("======================================\n");
		goto input;
	}
//////////////////////////////////////////// 
}
