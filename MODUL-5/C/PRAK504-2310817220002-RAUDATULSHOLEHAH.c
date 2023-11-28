#include <stdio.h>
int reverse(int x)
{
    // Lengkapi Function ini
    int reversed = 0;
    while (x > 0)
    {
        int jumlah = x % 10;
        reversed = (reversed * 10) + jumlah;
        x /= 10;
    }
    return reversed;
}
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
}