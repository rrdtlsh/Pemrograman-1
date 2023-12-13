Kolom, Baris = map(int, input().split())
Nomor = list(map(int, input().split()))
Matrix = []
a = 0
for i in range (Kolom) :
    Matrix.append(Nomor[a:a+Baris])
    a = a + Baris
for Kolom in Matrix :
    for Nomor in Kolom :
        print(Nomor, end=' ')
    print()