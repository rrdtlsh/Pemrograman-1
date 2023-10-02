#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Variabel a bernilai: ");
    scanf("%d", &a);

    printf("Variabel b bernilai: ");
    scanf("%d", &b);

    printf("Variabel c bernilai: ");
    scanf("%d", &c);

    int a_sama_dengan_b = a == b;
    int b_lebihbesardari_c = b > c;
    int a_tidaksamadengan_c = a != c;

    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", a_sama_dengan_b);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", b_lebihbesardari_c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", a_tidaksamadengan_c);
    return 0;
}