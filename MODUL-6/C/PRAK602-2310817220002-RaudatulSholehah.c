#include <stdio.h>

int main()
{
    int a, JumlahRuang, IsiZetsu;
    scanf("%d", &JumlahRuang);

    int Nomor[JumlahRuang];
    for (a = 0; a < JumlahRuang; a++)
    {
        scanf("%d", &IsiZetsu);
        Nomor[a] = IsiZetsu;
    }

    for (a = 0; a < JumlahRuang; a++)
    {
        printf("%d ", Nomor[a] * (a + 1));
    }

    return 0;
}