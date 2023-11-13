#include <stdio.h>

int main()
{
    int n, Kelipatan;
    int Hasil = 0;

    printf("Input Jumlah Baris : ");
    scanf("%d", &n);

    printf("Input Kelipatan : ");
    scanf("%d", &Kelipatan);

    for (int i = 1; i <= n; i++)
    {
        int Baris = 0;
        for (int a = i; a > 0; a--)
        {
            Baris += a * Kelipatan;
            if (a == i)
            {
                printf("(%d * %d)", a, Kelipatan);
            }
            else
            {
                printf(" + (%d * %d)", a, Kelipatan);
            }
        }

        printf(" = %d\n", Baris);
        Hasil += Baris;
    }
    printf("%d\n", Hasil);
    return 0;
}