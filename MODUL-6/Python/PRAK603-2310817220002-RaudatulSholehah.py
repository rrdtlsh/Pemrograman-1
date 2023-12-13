Baris_1, Baris_2 = map(int, input().split())
if(Baris_1 !=Baris_2):
    print("Jumlah Tidak Sama")
else:
    Bil_1 = list(map(int, input().split()))
    Bil_2 = list(map(int, input().split()))
    for i in range (Baris_1):
        print(Bil_1[i]*Bil_2[i], end=' ')