V = [9, 42, 21, 14, 25, 3, 19, 33, 45, 6, 8]
contador = 0

for i in range(len(V)):
    for j in range(len(V)):
        if i < j and V[i] > V[j]:
            contador += 1

print(f"O numero de inversoes eh: {contador}")
