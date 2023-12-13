x = int(input())
Matrix_1 = [];Matrix_2 = [];MatrixAXB = []

print('Matriks A')
for a in range(x):
    c =  list(map(int, input().split()))
    Matrix_1.append(c)

print('Matriks B')
for a in range(x):
    c =  list(map(int, input().split()))
    Matrix_2.append(c)

print('Matriks AXB')
for a in range(x):
    MatrixAXB.append([])
    for b in range(x):
        Total = 0
        for c in range(x):
            Total = Total + Matrix_1[a][c] * Matrix_2[c][b]
        MatrixAXB[a].append(Total)

for Isi in MatrixAXB:
    for c in Isi :
        print(c, end=" ")
    print()
