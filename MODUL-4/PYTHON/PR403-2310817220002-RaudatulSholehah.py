Angka1, Angka2 = map(int, input("Input:\n").split())

if (Angka1 - Angka2) < 0:
    Nilai = (Angka1 - Angka2) * -1
    for i in range (Nilai + 1):
        print(f"{Angka1} {Angka2}", end='')
        Angka1 = Angka1 + 1
        Angka2 = Angka2 - 1
        if i < Nilai:
            print(f" - ", end='')

elif (Angka1 - Angka2) > 0:
    Nilai = (Angka1 - Angka2) * 1
    for i in range (Nilai + 1):
        print(f"{Angka1} {Angka2}", end='')
        Angka1 = Angka1 - 1
        Angka2 = Angka2 + 1
        if i < Nilai:
            print(f" - ", end='')