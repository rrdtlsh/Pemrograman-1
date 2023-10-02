#include <stdio.h>
int main()
{
    int a, b;

    printf("Jumlah pasukan yang dibawa Yu Zhong: ");
    scanf("%d", &a);

    printf("Jumlah pahlawan: ");
    scanf("%d", &b);

    int jumlah = a / b;

    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d\n", jumlah);
    return 0;
}