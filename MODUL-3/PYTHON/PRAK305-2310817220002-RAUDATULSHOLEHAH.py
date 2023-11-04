Jumlah_Detik = int(input("Input : "))

Jam = Jumlah_Detik // 3600
Menit = (Jumlah_Detik % 3600) // 60
Detik = Jumlah_Detik % 60
Hari = Jumlah_Detik // 86400
Sisa_Detik = Jumlah_Detik % 86400
Jam_Sisa = Sisa_Detik // 3600
Sisa_Detik1 = Sisa_Detik % 3600
Menit_Sisa = Sisa_Detik1 // 60
Sisa_Detik2 = Sisa_Detik1 % 60

if Jumlah_Detik >= 86400:
    print(f"Output : {Hari} Hari {Jam_Sisa:02d}:{Menit_Sisa:02d}:{Sisa_Detik2:02d}")
elif Jumlah_Detik < 86400:
    print(f"Output : {Jam:02d}:{Menit:02d}:{Detik:02d}")