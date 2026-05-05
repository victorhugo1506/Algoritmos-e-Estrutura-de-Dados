U = [1, 3, 6, 7, 10, 11, 15, 17, 19, 21]
V = [2, 4, 5, 8, 9, 12, 14, 16, 18, 20]
n = len(U)

inicio_u, fim_u = 0, n - 1
inicio_v, fim_v = 0, n - 1

while fim_u - inicio_u > 1:
    meio_u = (inicio_u + fim_u) // 2
    meio_v = (inicio_v + fim_v) // 2

    if U[meio_u] < V[meio_v]:
        descartar = meio_u - inicio_u
        inicio_u += descartar
        fim_v -= descartar
    else:
        descartar = meio_v - inicio_v
        inicio_v += descartar
        fim_u -= descartar

if U[inicio_u] < V[inicio_v]:
    mediana = U[inicio_u]
else:
    mediana = V[inicio_v]

print(f"A mediana eh: {mediana}")
print("E o tempo de execucao eh O(log n).")