#include <stdio.h>

int main()
{
    int x, y;
    printf("Input : \n");
    scanf("%d %d", &x, &y);

    if (x <= y)
    {
        printf("Urutan terkecil ke terbesar : %d, %d\n", x, y);
    }
    else
    {
        printf("Urutan terkecil ke terbesar : %d, %d\n", y, x);
    }

    return 0;
}