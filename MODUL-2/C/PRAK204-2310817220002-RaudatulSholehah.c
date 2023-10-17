#include <stdio.h>
#include <string.h>
#define v 3.142857
int main()
{
    float jari_jari, tinggi, volume, luas, keliling;
    printf("Input\n");
    scanf("%f %f", &jari_jari, &tinggi);

    volume = v * jari_jari * jari_jari * tinggi;
    luas = 2 * v * jari_jari * (jari_jari + tinggi);
    keliling = 2 * v * jari_jari;

    printf("Output\nvolume    = %.2f\n", volume);
    printf("luas      = %.2f\n", luas);
    printf("keliling  = %.2f\n", keliling);
    return 0;
}