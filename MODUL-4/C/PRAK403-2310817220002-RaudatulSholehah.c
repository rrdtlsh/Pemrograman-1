#include <stdio.h>

int main()
{
    int Angka1, Angka2;
    int Nilai;

    printf("Input: \n");
    scanf("%d %d", &Angka1, &Angka2);

    if ((Angka1 - Angka2) < 0)
    {
        Nilai = (Angka1 - Angka2) * -1;
        for (int i = 0; i <= Nilai; i++)
        {
            printf("%d %d", Angka1, Angka2);
            Angka1 += 1;
            Angka2 -= 1;
            if (i < Nilai)
            {
                printf(" - ");
            }
        }
    }
    else if ((Angka1 - Angka2) > 0)
    {
        Nilai = (Angka1 - Angka2) * 1;
        for (int i = 0; i <= Nilai; i++)
        {
            printf("%d %d", Angka1, Angka2);
            Angka1 -= 1;
            Angka2 += 1;
            if (i < Nilai)
            {
                printf(" - ");
            }
        }
    }
    return 0;
}