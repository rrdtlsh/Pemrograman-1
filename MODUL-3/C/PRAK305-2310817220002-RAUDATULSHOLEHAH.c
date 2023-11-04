#include <stdio.h>

int main()
{
    int Jumlah_Detik, Jam, Menit, Detik, Hari, Sisa_Detik, Jam_Sisa, Sisa_Detik1, Sisa_Detik2, Menit_Sisa;
    printf("Input : ");
    scanf("%d", &Jumlah_Detik);

    Jam = Jumlah_Detik / 3600;
    Menit = (Jumlah_Detik % 3600) / 60;
    Detik = Jumlah_Detik % 60;
    Hari = Jumlah_Detik / 86400;
    Sisa_Detik = Jumlah_Detik % 86400;
    Jam_Sisa = Sisa_Detik / 3600;
    Sisa_Detik1 = Sisa_Detik % 3600;
    Menit_Sisa = Sisa_Detik1 / 60;
    Sisa_Detik2 = Sisa_Detik1 % 60;

    if (Jumlah_Detik >= 86400)
    {
        printf("Output : %d Hari %02d:%02d:%02d", Hari, Jam_Sisa, Menit_Sisa, Sisa_Detik2);
    }
    else if (Jumlah_Detik < 86400)
        printf("Output: %02d:%02d:%02d", Jam, Menit, Detik);
    return 0;
}