#include <stdio.h>
int main()
{
    int Matrix_1[10][10], Matrix_2[10][10], Hasil[10][10];
    int a, b, c, x, Total = 0;

    scanf("%d", &x);
    printf("Matriks A\n");

    for (a = 0; a < x; a++)
    {
        for (b = 0; b < x; b++)
        {
            scanf("%d", &Matrix_1[a][b]);
        }
    }
    printf("Matriks B\n");
    for (a = 0; a < x; a++)
    {
        for (b = 0; b < x; b++)
        {
            scanf("%d", &Matrix_2[a][b]);
        }
    }
    for (a = 0; a < x; a++)
    {
        for (b = 0; b < x; b++)
        {
            for (c = 0; c < x; c++)
            {
                Total = Total + Matrix_1[a][c] * Matrix_2[c][b];
            }
            Hasil[a][b] = Total;
            Total = 0;
        }
    }
    printf("Matriks AXB\n");
    for (a = 0; a < x; a++)
    {
        for (b = 0; b < x; b++)
        {
            printf("%d ", Hasil[a][b]);
        }
        printf("\n");
    }
    return 0;
}