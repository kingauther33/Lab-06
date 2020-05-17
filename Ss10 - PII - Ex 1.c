#include <stdio.h>

int main()
{
    int x, i, temp;
    printf("Moi ban nhap vao gia tri can lay giai thua: ");
    scanf("%d", &x);
    temp = x;
    if (x == 0)
        printf("Giai thua cua %d la: %d! = 1", temp, temp);
    else
    {
        for (i=1; i<temp; i++)
            x = x*(temp-i);
        printf("Giai thua cua %d la: %d! = %d ",temp, temp, x);
    }
    return 0;
}