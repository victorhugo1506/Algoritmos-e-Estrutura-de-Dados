def main():
    A = [55, 81, 45, 19, 28, 35, 66, 10]
    n = len(A)
    alvo = n // 2

    inicio = 0
    fim = n - 1
    verificador = False

    while inicio <= fim:
        pivo = A[inicio]
        i = inicio

        for j in range(inicio + 1, fim + 1):
            if A[j] <= pivo:
                i += 1
                A[i], A[j] = A[j], A[i]

        A[inicio], A[i] = A[i], A[inicio]

        if i == alvo:
            verificador = True
            print(f"Mediana encontrada na posição: {i + 1}")
            print(f"Valor: {A[i]}")
            break
        elif i > alvo:
            fim = i - 1
        else:
            inicio = i + 1

    if not verificador:
        print("A lista não possui mediana válida para os parâmetros.")


if __name__ == "__main__":
    main()