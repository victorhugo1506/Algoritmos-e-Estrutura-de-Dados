V = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
n = len(V)

print(*V)

x = int(input("Digite o valor a ser substituido (x): "))
y = int(input("Digite o novo valor (y): "))

inicio = 0
fim = n - 1
encontrou = False

while inicio <= fim:
    meio = (inicio + fim) // 2

    if V[meio] == x:
        V[meio] = y
        encontrou = True
        break

    if V[meio] < x:
        inicio = meio + 1
    else:
        fim = meio - 1

if encontrou:
    print(f"Elemento {x} substituido por {y} com sucesso.")
else:
    print(f"Elemento {x} nao encontrado no vetor.")

print("Vetor resultante:", *V)
print("E o tempo de execucao eh O(log n).")