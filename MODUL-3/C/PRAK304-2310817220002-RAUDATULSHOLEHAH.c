#include <stdio.h>

int main()
{
    int A;
    printf("Input : ");
    scanf("%d", &A);
    {
        if (!A)
        {
            printf("Output : Nol");
        }
        if (A > 0 && A < 10)
        {
            printf("Output : Satuan");
        }
        else if (A >= 10 && A <= 20)
        {
            printf("Output : Belasan");
        }
        else if (A >= 20 && A <= 99)
        {
            printf("Output : Puluhan");
        }
        else if (A >= 100)
        {
            printf("Output : Anda Menginput Melebihi Limit Bilangan");
        }
    }
    return 0;
}