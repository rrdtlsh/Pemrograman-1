A = int(input("input : "))

if A==0:
    print(f"Output: Nol")
elif 0 < A < 10:
    print(f"Output: Satuan")
elif 10 <= A <= 20:
    print(f"Output: Belasan")
elif 20 <= A <=99:
    print(f"Output: Puluhan")
else:
    print(f"Output: Anda Menginput Melebihi Limit Bilangan")