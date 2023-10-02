#include <stdio.h>
int main()
{
    float a, b, x, y;
    printf("Variabel a bernilai: ");
    scanf("%f", &a);

    printf("Variabel b bernilai: ");
    scanf("%f", &b);

    printf("Variabel x bernilai: ");
    scanf("%f", &x);

    printf("Variabel y bernilai: ");
    scanf("%f", &y);

    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", (a + b) * x / y);
    return 0;
}