V = [9, 42, 21, 14, 25, 3, 19, 33, 45, 6]

for i in range(len(V)):
    for j in range(len(V)):
        if V[i] > V[j]:
            V[i], V[j] = V[j], V[i]

kmaior = int(input("Digite qual maior valor voce quer (Entre as posicoes de 1 a 10): "))
print(f"O {kmaior} maior eh {V[kmaior - 1]}")
print("E seu tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).")
