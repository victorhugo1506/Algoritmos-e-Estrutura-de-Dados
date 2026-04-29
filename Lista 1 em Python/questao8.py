V = [9, 42, 21, 14, 28, 3, 19, 32, 46, 6]
A = [2, 15, 19, 12, 33, 9, 17, 41, 54, 8]
aux = [0] * 10

for i in range(len(V)):
    for j in range(len(A)):
        if V[i] == A[j]:
            aux[i] = V[i]

print("Vetor com valores repetidos:", *aux)
