print(f"Diketahui : ")
a = int(input("Variabel a bernilai :"))
b = int(input("Variabel b bernilai :"))
c = int(input("Variabel c bernilai :"))

Harga_tanah_Per_Meter = 85000
hasilkeliling = a + b + c
totalhasil = hasilkeliling * Harga_tanah_Per_Meter

print(f"Panjang sisi segitiga berturut-turut adalah {a, b, c}")
print(f"Keliling Tanah Pak Dengklek adalah {hasilkeliling}")
print(f"Harga tanah Per Meter adalah {Harga_tanah_Per_Meter}")
print(f"Jawaban : ")
print(f"Biaya yang diperlukan Pak Dengklek adalah Rp {totalhasil}")