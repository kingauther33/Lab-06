/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    printf("The even Numbers from 1 to 30 are \n");
    for (num = 2 ; num <= 30 ; num += 2)
    printf("%d\n",num);
    return 0;
}