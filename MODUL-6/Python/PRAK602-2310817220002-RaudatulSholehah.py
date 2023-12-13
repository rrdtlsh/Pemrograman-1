JumlahRuang = int(input())
IsiZetsu = list(map(int,input().split()))
for i in range (JumlahRuang):
    print((i+1)*IsiZetsu[i], end= ' ')