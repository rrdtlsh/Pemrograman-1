print(f"Diketahui : ")
putaran = int(input("Pak Dengklek mengelilingi taman: "))
jarak = int(input("Jarak tempuh Pak Dengklek: "))

jari_jari = jarak / putaran
hasiljari_jari = jari_jari / (2 * 3.14)

print(f"Jawaban : ")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah { hasiljari_jari:.2f}")