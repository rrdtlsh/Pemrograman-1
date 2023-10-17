Nilai1 = float(input("Masukkan Nilai Pertama : "))
Nilai2 = float(input("Masukkan Nilai Pertama : "))

hasil = Nilai1 + Nilai2

Nilai1=(f"{int(Nilai1)}" if Nilai1.is_integer() else f"{Nilai1:.2f}")

print(f'Hasil dari penjumlahan nilai pertama "{Nilai1}" dan nilai kedua "{Nilai2}" adalah "{hasil:.2f}"')