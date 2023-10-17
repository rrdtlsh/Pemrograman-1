#include <stdio.h>
#include <string.h>

int main()
{
    char nama[50], nim[50], paralel[50], ttl[50], alamat[50], hobby[50], noHP[50];
    printf("Nama                      : ");
    gets(nama);

    printf("NIM                       : ");
    gets(nim);

    printf("Kelas Paralel             : ");
    gets(paralel);

    printf("Tempat/Tanggal Lahir      : ");
    gets(ttl);

    printf("Alamat                    : ");
    gets(alamat);

    printf("Hobby                     : ");
    gets(hobby);

    printf("No. HP                    : ");
    gets(noHP);

    return (0);
}