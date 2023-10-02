import math
print("Diketahui : ")
alas   = int(input("Alas = "))
tinggi = int(input("Tinggi = "))

sisi_a = tinggi
sisi_b = int(math.sqrt(alas**2 + tinggi**2))
sisi_c = alas

keliling_segitiga = sisi_a + sisi_b + sisi_c
luas_segitiga = 0.5 * alas * tinggi

print("Jawab : ")
print(f"Sisi A = {sisi_a} cm")
print(f"Sisi B = {sisi_b} cm")
print(f"Sisi C = {sisi_c} cm")
print(f"Keliling = {keliling_segitiga:.0f} cm")
print(f"Luas = {luas_segitiga:.0f} cm")