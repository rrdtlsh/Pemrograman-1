def hitung (nilai1, nilai2):
    return abs(nilai1 - nilai2)

def mutlak(angka):
    if angka < 0:
        return -angka
    else:
        return angka

a, c, b, d = map(int, input().split())

hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))