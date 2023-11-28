def reverse(x):
    reversed_jumlah = 0
    while x > 0:
        jumlah = x % 10
        reversed_jumlah = (reversed_jumlah * 10) + jumlah
        x //= 10
    return reversed_jumlah

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))