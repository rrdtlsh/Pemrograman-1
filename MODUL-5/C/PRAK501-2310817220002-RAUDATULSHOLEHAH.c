#include <stdio.h>

// Buatlah Function Disini
int MaxBilangan(int a, int b, int c, int d)
{
    int Maks = a;
    if (b > Maks)
    {
        Maks = b;
    }
    if (c > Maks)
    {
        Maks = c;
    }
    if (d > Maks)
    {
        Maks = d;
    }

    return Maks;
}
int main()
{

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int hasil = MaxBilangan(a, b, c, d);
    printf("%d", hasil);

    return 0;
}