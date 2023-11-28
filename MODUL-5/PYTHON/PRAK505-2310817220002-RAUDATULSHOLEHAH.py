def Biodata(TahunLahir, Nama, Asal):
    tahun_sekarang = 2020
    Umur = tahun_sekarang - TahunLahir

    print("Perkenalkan Nama Saya :", Nama)
    print("Umur saya             :", Umur)
    print("Saya Adalah Angkatan  :", tahun_sekarang)
    print("Asal Saya dari        :", Asal)

tahunLahir = int(input())
Namaku = input()
Asal = input()

Biodata(tahunLahir, Namaku, Asal)