#include <stdio.h>

int main()
{
    int Pilihan;
    float N1, N2, Hasil;

    while (1)
    {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &Pilihan);

        if (Pilihan >= 1 && Pilihan <= 4)
        {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &N1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &N2);

            switch (Pilihan)
            {
            case 1:
                Hasil = N1 + N2;
                printf("Hasil Penjumlahan antara %.2f dan %.2f adalah %.2f\n", N1, N2, Hasil);
                break;
            case 2:
                Hasil = N1 - N2;
                printf("Hasil Pengurangan antara %.2f dan %.2f adalah %.2f\n", N1, N2, Hasil);
                break;
            case 3:
                Hasil = N1 * N2;
                printf("Hasil Perkalian antara %.2f dan %.2f adalah %.2f\n", N1, N2, Hasil);
                break;
            case 4:
                if (N2 != 0)
                {
                    Hasil = N1 / N2;
                    printf("Hasil Pembagian antara %.2f dan %.2f adalah %.2f\n", N1, N2, Hasil);
                }
                else
                {
                    printf("ERROR: Pembagian nilai nol tidak berjalan\n");
                }
                break;
            }
        }
        else if (Pilihan == 5)
        {
            printf("Terimakasih, telah menggunakan kalkulator Raudatul Sholehah\n");
            break;
        }
        else
        {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }

    return 0;
}