print("input")
Nilai = input().split()

if len(Nilai)==1:
    jari_jari = float(Nilai[0])
    Tinggi    = float(input())

elif len(Nilai)==2:
    jari_jari, Tinggi = map(float, Nilai)

v = 3.142857
volume   = v * jari_jari * jari_jari * Tinggi
luas     = 2 * v * jari_jari * (jari_jari + Tinggi)
keliling = 2 * v * jari_jari

print("output")
print(f"volume    = {volume:.2f}")
print(f"luas      = {luas:.2f}")
print(f"keliling  = {keliling:.2f}")