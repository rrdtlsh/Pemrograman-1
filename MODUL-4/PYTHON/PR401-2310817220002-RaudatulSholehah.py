Bil_Kelipatan = int(input("input kelipatan: "))
simbol = input("Input Simbol: ")

for i in range(1, 51):
    if i % Bil_Kelipatan == 0:
        print(simbol, end=' ')
    else:
        print(i, end=' ') 