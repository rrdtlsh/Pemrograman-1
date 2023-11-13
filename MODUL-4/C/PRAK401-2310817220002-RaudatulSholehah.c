#include <stdio.h>

int main()
{
    int Bil_Kelipatan;
    char Simbol;

    printf("Input Kelipatan: ");
    scanf("%d", &Bil_Kelipatan);

    printf("Input Simbol: ");
    scanf(" %c", &Simbol);

    for (int i = 1; i <= 50; i++)
    {
        if (i % Bil_Kelipatan == 0)
        {
            printf("%c ", Simbol);
        }
        else
        {
            printf("%d ", i);
        }
    }

    return 0;
}