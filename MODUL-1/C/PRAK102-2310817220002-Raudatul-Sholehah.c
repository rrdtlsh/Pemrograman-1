#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Variabel a bernilai: ");
    scanf("%f", &a);

    printf("Variabel b bernilai: ");
    scanf("%f", &b);

    printf("Variabel c bernilai: ");
    scanf("%f", &c);

    printf("Hasil dari a dikali b dibagi c adalah %f\n", a * b / c);
    return 0;
}