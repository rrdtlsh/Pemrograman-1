harga_sepatu_a = int(input("Harga sepatu A adalah: "))
harga_sepatu_b = int(input("Harga sepatu B adalah: "))
harga_sepatu_a_diskon = 0.13
harga_sepatu_b_diskon = 0.21

print(f"Sepatu A mendapat diskon 13%% sehingga harganya menjadi: {harga_sepatu_a - (harga_sepatu_a * harga_sepatu_a_diskon):.0f}")
print(f"Sepatu B mendapat diskon 21%% sehingga harganya menjadi: {harga_sepatu_b - (harga_sepatu_b * harga_sepatu_b_diskon):.0f}")