V = [3, 1, 7, 2, 9, 4, 6, 5, 8, 10]
n = len(V)

print("Vetor original:", *V)

k = int(input("Digite o valor de k: "))

i = 0
j = n - 1

while i <= j:
    if V[i] < k:
        i += 1
    else:
        V[i],V[j] = V[j], V[i]
        j -= 1

print("Vetor apos particao:", *V)
print(f"Posicao do primeiro elemento maior ou igual a {k}: {i + 1}")
print(f"Primeiro elemento maior ou igual a {k}: {V[i]}")