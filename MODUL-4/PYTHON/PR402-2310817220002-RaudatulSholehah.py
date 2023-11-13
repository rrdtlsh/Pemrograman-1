Batas = int(input("Input Batas Maksimal Bilangan: "))

print(f"Output Bilangan Ganjil: ", end= ' ')
for i in range(1, Batas, + 1):
    if i % 2 != 0:
        print(i, end= ' ')

print(f"\nOutput Bilangan Genap Terbalik: ", end= ' ')
for i in range(Batas, 1, -1):
    if i % 2 == 0:
        print(i, end= ' ')