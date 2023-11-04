x = int(input("Input nilai pertama: "))
y = int(input("Input nilai kedua: "))
if x <= y:
    terkecil = x
    terbesar = y
else:
    terkecil = y
    terbesar = x

print(f"Urutan terkecil ke terbesar: {terkecil}, {terbesar}")