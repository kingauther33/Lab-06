#include <stdio.h>

int main()
{
    int tuoi, i;
    char ten[80];
    printf("Moi nhap ten cua ban: ");
    scanf("%[^\n]", ten);
    printf("Moi nhap tuoi cua ban: ");
    scanf("%d", &tuoi);
    for (i=1; i<=tuoi; i++)
    {
        printf("Chuc mung sinh nhat %s lan thu %d", ten, i);
        if (i<tuoi)
            printf("\n");
    }
    return 0;
}
