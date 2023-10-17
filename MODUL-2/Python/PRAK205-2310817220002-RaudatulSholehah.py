import math
print("input")
A = input().split()

if len(A)==1:
    A = int(A[0])
    B = int(input())

elif len(A)==2:
    A, B = map(int, A )

Alas = int(math.sqrt(B**2 - A**2))
Tinggi = A
Keliling = A + B + Alas
Luas = 0.5 * Alas * Tinggi

print("output")
print(f"Alas        = {Alas} cm")
print(f"Tinggi      = {Tinggi} cm")
print(f"Keliling    = {Keliling} cm")
print(f"Luas        = {Luas:.0f} cm^2")