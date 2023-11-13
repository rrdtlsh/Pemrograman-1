n = int(input("Input Jumlah Baris : "))
Kelipatan = int(input("Input Kelipatan : "))
Hasil = 0

for i in range(1, n + 1):
    Baris = 0

    for a in range(i, 0, -1):
        Baris += a * Kelipatan

        if a == i:
            print(f"({a} * {Kelipatan})", end='')
        else:
            print(f" + ({a} * {Kelipatan})", end='')

    print(f" = {Baris}")
    Hasil += Baris

print(f"{Hasil}")