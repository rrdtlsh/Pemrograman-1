#include <stdio.h>
#include <math.h>
int main()
{
    printf("Diketahui : \n");
    int alas, tinggi, sisi_a, sisi_b, sisi_c;
    printf("Alas = ");
    scanf("%d", &alas);

    printf("Tinggi = ");
    scanf("%d", &tinggi);

    sisi_a = tinggi;
    sisi_b = sqrt(pow(alas, 2) + pow(tinggi, 2));
    sisi_c = alas;

    int keliling_segitiga = sisi_a + sisi_b + sisi_c;
    int luas_segitiga = 0.5 * alas * tinggi;

    printf("Sisi A = %d cm \n", sisi_a);
    printf("Sisi B = %d cm \n", sisi_b);
    printf("Sisi C = %d cm \n", sisi_c);
    printf("Keliling = %d cm \n", keliling_segitiga);
    printf("Luas = %d cm \n", luas_segitiga);

    return 0;
}