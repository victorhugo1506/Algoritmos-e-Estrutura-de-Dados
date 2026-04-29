V = [2, 1, 9, 7, 6, 3, 9, 4, 2, 6, 1, 3]
n = len(V)
achou = False

k = int(input("Digite o valor de k: "))

for i in range(n):
    for j in range(i + 1, min(i + k + 1, n)):
        if V[i] == V[j]:
            print(f"Sim, o {V[i]} nas posicoes {i} e {j}")
            achou = True

if not achou:
    print(f"Nao existem elementos repetidos dentro da distancia {k}")
