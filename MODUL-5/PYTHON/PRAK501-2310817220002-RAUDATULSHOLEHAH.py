def MaxBilangan(a, b, c, d):
    Maks = a
    if b > Maks:
        Maks = b
    if c > Maks:
        Maks = c
    if d > Maks:
        Maks = d
    return Maks

a, b, c, d = map(int, input().split())
hasil = MaxBilangan(a, b, c, d)
print(hasil)