/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int dem, dem1;
    dem1 = 0;
    do
    {
        printf("Nhap 1 so bat ki: ");
        scanf("%d", &dem);
        printf("So vua nhap la: %d\n", dem);
        dem1++;
    } while (dem!=0);
    printf("Tong cac so vua nhap vao tu ban phim la: %d", --dem1);
}