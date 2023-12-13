#include <stdio.h>
int main()
{
    int a, b, Matrix, Kolom, Baris;
    scanf("%i %i", &Baris, &Kolom);
    int Nomor[Baris][Kolom];
    for (a = 0; a < Baris; a++)
    {
        for (b = 0; b < Kolom; b++)
        {
            scanf("%i", &Matrix);
            Nomor[a][b] = Matrix;
        }
    }
    for (a = 0; a < Baris; a++)
    {
        for (b = 0; b < Kolom; b++)
        {
            printf("%i ", Nomor[a][b]);
        }
        printf("\n");
    }
    return 0;
}