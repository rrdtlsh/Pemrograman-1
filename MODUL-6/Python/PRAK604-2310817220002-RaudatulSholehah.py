a = 0
b = 0
Kode = list(input(""))
Pesan = list(input(""))

Panjang_Kode = len(Kode)
Panjang_Pesan = len(Pesan)

if Panjang_Kode == Panjang_Pesan:
    for i in range(Panjang_Kode):
        if " " in Kode[i] and " " in Pesan[i]:
            continue
        
        elif Kode[i] == Pesan[i]:
            print("*", end = "")
            a += 1

        else:
            print("#", end = "")
            b += 1

    print("\n* = ", a)
    print("# = ", b)
    if a <= b:
        print("Pesan Palsu")
    else:
        print("Pesan Asli")

else:
    print("Panjang kalimat berbeda, pesan palsu")