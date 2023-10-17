#include <stdio.h>
#include <math.h>
int main()
{
    int A, B;
    printf("Input\n");
    scanf("%d %d", &A, &B);

    int Alas = sqrt(pow(B, 2) - (pow(A, 2)));
    int Tinggi = A;
    int Keliling = A + B + Alas;
    int Luas = 0.5 * Alas * Tinggi;

    printf("Alas        = %d cm \n", Alas);
    printf("Tinggi      = %d cm \n", Tinggi);
    printf("Keliling    = %d cm \n", Keliling);
    printf("Luas        = %d cm^2 \n", Luas);
    return 0;
}