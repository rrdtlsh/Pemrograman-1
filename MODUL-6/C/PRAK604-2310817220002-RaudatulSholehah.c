#include <stdio.h>
#include <string.h>
int main()
{

    char Kode[100], Pesan[100];
    int a, b;
    scanf("%[^\n]%*c", &Kode);
    scanf("%[^\n]%*c", &Pesan);

    int Panjang_Kode = strlen(Kode), Panjang_Pesan = strlen(Pesan);
    if (Panjang_Kode == Panjang_Pesan)
    {
        int a = 0, b = 0;
        for (int i = 0; i < Panjang_Kode; i++)
        {
            if (Pesan[i] == ' ' && Kode[i] == ' ')
            {
                continue;
            }
            else if (Kode[i] == Pesan[i])
            {
                printf("*");
                a++;
            }
            else if (Kode[i] != Pesan[i])
            {
                printf("#");
                b++;
            }
        }
        printf("\n*= %d", a);
        printf("\n#= %d", b);
        if (a <= b)
        {
            printf("\nPesan Palsu");
        }
        else
        {
            printf("\nPesan Asli");
        }
    }
    else
    {
        printf("Panjang Kalimat Berbeda, Pesan Palsu");
    }
    return 0;
}