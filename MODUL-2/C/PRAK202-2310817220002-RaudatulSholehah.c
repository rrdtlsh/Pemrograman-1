#include <stdio.h>
#include <string.h>
int main()
{
    float Nilai1, Nilai2, hasil;
    printf("Masukkan Nilai Pertama      : ");
    scanf("%f", &Nilai1);

    printf("Masukkan Nilai Pertama      : ");
    scanf("%f", &Nilai2);

    hasil = Nilai1 + Nilai2;

    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah %.2f\n", Nilai1, Nilai2, hasil);
    return 0;
}