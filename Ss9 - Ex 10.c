#include <stdio.h>

void main ()
{
	int x;
	char i, ans;
//////////////////////////////////////////// 
	do
	{
		x = 0;
		ans = 'y';
		printf("Enter sequence of character:");
		do 
		{
			i = getchar ();
			x++;
		}
		while (i != '\n');
		i = ' ';
			printf("Number of characters entered is: %d", --x);
			printf("\nMore sequences (Y/N) ?");
			ans = getchar();
			fflush(stdin);
	} while(ans == 'Y' || ans == 'y');
//////////////////////////////////////////// 
}
