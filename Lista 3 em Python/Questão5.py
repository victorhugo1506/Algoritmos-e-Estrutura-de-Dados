V = [
    [3, 9, 4, 2, 4, 1, 8, 5, 1],
    [1, 2, 3, 4, 5, 6, 7, 8, 9],
    [5, 8, 2, 3, 9, 8, 4, 1, 7],
    [8, 3, 4, 2, 3, 1, 3, 9, 4],
    [3, 7, 2, 9, 4, 2, 1, 2, 3],
    [7, 5, 3, 1, 2, 4, 5, 8, 2],
    [4, 7, 3, 6, 6, 1, 9, 3, 2],
    [1, 5, 3, 2, 9, 8, 7, 6, 5],
    [3, 9, 4, 2, 4, 1, 8, 5, 1],
]

verificador = False

for i in range(9):
    for j in range(i + 1, 9):
        if V[i] == V[j]:
            verificador = True
            print(f"As linhas {i + 1} e {j + 1} sao iguais")

if not verificador:
    print("A matriz nao possui linhas iguais")