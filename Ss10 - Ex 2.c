/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    num = 10;
    printf("\nCountdown");
    while(num >= 0)
    {
        printf("\n%d",num);
        num--;
    }
    return 0;
}