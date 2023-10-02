#include <stdio.h>
int main()
{
    float putaran, jarak;

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman: ");
    scanf("%f", &putaran);

    printf("Jarak tempuh Pak Dengklek: ");
    scanf("%f", &jarak);

    float jari_jari = jarak / putaran;
    float hasiljari_jari = jari_jari / (2 * 3.14);

    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f\n", hasiljari_jari);
    return 0;
}
