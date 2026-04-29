U = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
V = [7, 2, 3, 1, 6, 5, 9, 10, 4, 8]

for i in range(len(V)):
    for j in range(len(V)):
        if V[i] < V[j]:
            V[i], V[j] = V[j], V[i]

for i in range(len(U)):
    if U[i] != V[i]:
        print("O vetor V nao eh uma permutacao do vetor U.")
        break
    elif i == len(U) - 1 and U[i] == V[i]:
        print("O vetor V eh uma permutacao do vetor U.")

print("O tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).")
