#include <stdio.h>

int main()
{
    int Batas;

    printf("Batas Maksimal Bilangan: ");
    scanf("%d", &Batas);

    printf("Bilangan Ganjil: ");
    for (int i = 1; i <= Batas; i++)
    {
        if (i % 2 != 0)
            printf("%d ", i);
    }

    printf("\nBilangan Genap Terbalik: ");
    for (int i = Batas; i >= 1; i--)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }

    return 0;
}