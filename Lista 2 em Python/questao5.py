V = [7, 1, 9, 1, 7, 3, 9, 2, 1, 6, 8, 3]
contador = 0

for i in range(len(V)):
    for j in range(len(V)):
        if V[i] < V[j]:
            V[i], V[j] = V[j], V[i]

print("Vetor ordenado:", *V)

numero_para_encontrar = int(input("Digite um numero para encontrar no vetor: "))

for num in V:
    if num == numero_para_encontrar:
        contador += 1
    elif num > numero_para_encontrar:
        break
    else:
        print("Seu numero nao esta no vetor")

print(f"O numero {numero_para_encontrar} aparece {contador} vezes no vetor.")
print("O tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).")
