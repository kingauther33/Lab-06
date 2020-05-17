/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int dem;
    for (dem=1; dem<=10; dem++)
    {
        if (dem==5)
            break;
        printf("%d\t", dem);
    }
    return 0;
}
