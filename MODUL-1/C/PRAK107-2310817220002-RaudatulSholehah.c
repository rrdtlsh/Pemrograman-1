#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Diketahui : \n");
    printf("Inputkan nilai sisi segitiga a: ");
    scanf("%d", &a);

    printf("Inputkan nilai sisi segitiga b: ");
    scanf("%d", &b);

    printf("Inputkan nilai sisi segitiga c: ");
    scanf("%d", &c);

    int Harga_tanah_Per_Meter = 85000;
    int hasilkeliling = a + b + c;
    int totalhasil = hasilkeliling * Harga_tanah_Per_Meter;

    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", hasilkeliling);
    printf("Harga tanah Per Meter adalah %d\n", Harga_tanah_Per_Meter);
    printf("Jawaban : \n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", totalhasil);

    return 0;
}
