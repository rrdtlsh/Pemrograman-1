#include <stdio.h>

int main()
{
    int Nilai;
    printf("Input : ");
    scanf("%d", &Nilai);
    {
        if (Nilai >= 80)
        {
            printf("Output : A");
        }
        else if (Nilai >= 70 && Nilai <= 79)
        {
            printf("Output :B");
        }
        else if (Nilai >= 60 && Nilai <= 69)
        {
            printf("Output :C");
        }
        else if (Nilai >= 50 && Nilai <= 59)
        {
            printf("Output :D");
        }
        else if (Nilai < 50)
        {
            printf("Output :E");
        }
    }
    return 0;
}