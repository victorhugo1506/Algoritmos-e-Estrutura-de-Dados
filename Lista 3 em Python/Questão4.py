V = [
    [3, 9, 4, 2, 4, 1, 8, 5, 1],
    [1, 2, 3, 4, 5, 6, 7, 8, 9],
    [5, 8, 2, 3, 9, 8, 4, 1, 7],
    [8, 3, 4, 2, 3, 1, 3, 9, 4],
    [3, 7, 2, 9, 4, 2, 1, 2, 3],
    [7, 5, 3, 1, 2, 4, 5, 8, 2],
    [4, 7, 3, 6, 6, 1, 9, 3, 2],
    [1, 5, 3, 2, 9, 8, 7, 6, 5],
    [3, 9, 4, 2, 4, 1, 8, 5, 10],
]

numero = int(input("Digite um valor para ver se esta na matriz e se ele se repete: "))

contador = sum(1 for i in range(9) for j in range(9) if V[i][j] == numero)

if contador > 1:
    print(f"{numero} eh repetido {contador} vezes")
elif contador == 1:
    print(f"{numero} so aparece uma vez")
else:
    print(f"{numero} nao aparece na matriz")