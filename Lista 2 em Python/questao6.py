U = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
V = [7, 2, 3, 1, 6, 5, 9, 10, 4, 8]
contador = 0

for u in U:
    for v in V:
        if u == v:
            contador += 1

if contador == 10:
    print("O vetor V eh uma permutacao do vetor U.")
else:
    print("O vetor V nao eh uma permutacao do vetor U.")

print("O tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).")
