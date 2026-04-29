V = [17, 2, 8, 1, 7, 13, 9, 12, 4, 16]
contador = 0

for i in range(len(V)):
    for j in range(len(V)):
        if V[i] > V[j]:
            V[i], V[j] = V[j], V[i]

print("Vetor ordenado:", *V)

for i in range(len(V)):
    proximo = V[i + 1] if i + 1 < len(V) else None
    anterior = V[i - 1] if i - 1 >= 0 else None

    nao_tem_proximo = proximo != V[i] + 1
    nao_tem_anterior = anterior != V[i] - 1

    if nao_tem_proximo and nao_tem_anterior:
        contador += 1

print(f"A quantidade de numeros isolados eh: {contador}")
print("E seu tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).")
