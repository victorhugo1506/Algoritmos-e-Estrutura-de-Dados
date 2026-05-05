V = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
n = len(V)

k = int(input("Digite o valor a ser buscado: "))

inicio = 0
fim = n - 1
resultado = -1

while inicio <= fim:
    meio = (inicio + fim) // 2

    if V[meio] == k:
        resultado = meio
        break

    if V[meio] < k:
        inicio = meio + 1
    else:
        fim = meio - 1

if resultado != -1:
    print(f"Elemento {k} encontrado na posicao {resultado + 1}.")
else:
    print(f"Elemento {k} nao encontrado.")