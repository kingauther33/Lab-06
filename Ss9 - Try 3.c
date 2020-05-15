#include <stdio.h>

void main ()
{
	long int i1, i2, j, count, temp;
	i1 = i2 = 1;
	count = 0;
	printf("Co bao nhieu chu so cua day fibonaci ban muon hien thi? ");
	scanf("%ld", &j);
	if (count < j)
	{
		printf("So fibonaci duoc hien thi theo yeu cau la: ");
		while(count<=j)
		{
			printf("%ld ",i1);
			temp = i1;
			i1 = i2;
			i2 = temp + i1;
			count++;
		}
	}
	else 
		printf("Khong co so fibonaci nao duoc hien thi");
}
