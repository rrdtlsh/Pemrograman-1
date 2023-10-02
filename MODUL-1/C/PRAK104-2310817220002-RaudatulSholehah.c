#include <stdio.h>
int main()
{
    int harga_sepatu_a;
    printf("Harga sepatu A adalah: ");
    scanf("%d", &harga_sepatu_a);
    int harga_sepatu_b;
    printf("Harga sepatu B adalah: ");
    scanf("%d", &harga_sepatu_b);

    float harga_sepatu_a_diskon = 0.13;
    float harga_sepatu_b_diskon = 0.21;

    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi: %.0f\n", harga_sepatu_a - (harga_sepatu_a * harga_sepatu_a_diskon));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi: %.0f\n", harga_sepatu_b - (harga_sepatu_b * harga_sepatu_b_diskon));

    return 0;
}