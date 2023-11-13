while True:
    print(f"Pilih program")
    print(f"1. Penjumlahan")
    print(f"2. Pengurangan")
    print(f"3. Perkalian")
    print(f"4. Pembagian")
    print(f"5. Exit")
    Pilihan = int(input(f"Masukkan Pilihan: "))
    
    if 1 <= Pilihan <= 4:
        N1 = float(input("Masukkan nilai pertama: "))
        N2 = float(input("Masukkan nilai kedua: "))
        
        if Pilihan == 1:
            Hasil = N1 + N2
            print(f"Hasil Penjumlahan antara {N1:.2f} dan {N2:.2f} adalah {Hasil:.2f}")
        elif Pilihan == 2:
            Hasil = N1 - N2
            print(f"Hasil Pengurangan antara {N1:.2f} dan {N2:.2f} adalah {Hasil:.2f}")
        elif Pilihan == 3:
            Hasil = N1 * N2
            print(f"Hasil Perkalian antara {N1:.2f} dan {N2:.2f} adalah {Hasil:.2f}")
        elif Pilihan == 4:
            if N2 != 0:
                Hasil = N1 / N2
                print(f"Hasil Pembagian antara {N1:.2f} dan {N2:.2f} adalah {Hasil:.2f}")
            else:
                print(f"ERROR: Pembagian nilai nol tidak berjalan")
                    
                    
    elif Pilihan == 5:
        print(f"Terimakasih, telah menggunakan kalkulator Raudatul Sholehah\n")
        break
    else:
        print(f"Input anda salah, silahkan coba lagi")