#include <stdio.h>
int main()
{
    int A, Isi, Baris_1, Baris_2, Hasil;
    scanf("%i %i", &Baris_1, &Baris_2);

    int Bil_1[Baris_1], Bil_2[Baris_2];
    if (Baris_1 == Baris_2)
    {
        for (A = 0; A < Baris_1; A++)
        {
            scanf("%i", &Isi);
            Bil_1[A] = Isi;
        }
        for (A = 0; A < Baris_2; A++)
        {
            scanf("%i", &Isi);
            Bil_2[A] = Isi;
        }
        for (A = 0; A < Baris_1; A++)
        {
            Hasil = Bil_1[A] * Bil_2[A];
            printf("%i ", Hasil);
        }
    }
    else
    {
        printf("Jumlah Tidak Sama");
    }
    return 0;
}