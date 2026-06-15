def reorganizar_esparsa(A):
    n = len(A)
    ocupados = 0
    verificador = False

    for i in range(n):
        if A[i] != -1:
            A[ocupados] = A[i]
            ocupados += 1
            verificador = True

    if not verificador:
        print("A lista está completamente vazia.")
        return

    espacamento = n // ocupados
    idx_antigo = ocupados - 1
    idx_novo = n - 1

    while idx_antigo >= 0:
        A[idx_novo] = A[idx_antigo]

        for k in range(1, espacamento):
            pos = idx_novo - k
            if pos >= 0:
                if pos != idx_antigo or idx_antigo == 0:
                    A[pos] = -1

        idx_novo -= espacamento
        idx_antigo -= 1

    print("Lista esparsa reorganizada")


if __name__ == "__main__":
    A = [10, 20, 30, -1, -1, -1, -1, -1]
    print("Antes:", A)
    reorganizar_esparsa(A)
    print("Depois:", A)