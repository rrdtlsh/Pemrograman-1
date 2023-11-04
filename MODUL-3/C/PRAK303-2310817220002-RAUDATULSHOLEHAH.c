#include <stdio.h>

int main()
{
    int N;
    printf("Input : ");
    scanf("%d", &N);
    {
        if (N > 0)
        {
            printf("Output : Positif");
        }
        else if (N < 0)
        {
            printf("Output : Negatif");
        }
        else
        {
            printf("output : Nol");
        }
    }
    return 0;
}