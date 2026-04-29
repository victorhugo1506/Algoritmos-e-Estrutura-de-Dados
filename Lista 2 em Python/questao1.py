V = [9, 42, 21, 14, 25, 3, 19, 33, 45, 6]

for i in range(len(V)):
    for j in range(len(V)):
        if V[i] > V[j]:
            V[i], V[j] = V[j], V[i]

print(f"O maior eh {V[0]}, o segundo maior eh {V[1]} e o terceiro maior eh {V[2]}")
print("E seu tempo de execucao eh O(n^2), porque percorre o vetor duas vezes (uma para cada loop).")
