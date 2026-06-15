def busca_binaria_esparsa(A, chave):
    inicio = 0
    fim = len(A) - 1
    verificador = False

    while inicio <= fim:
        meio = (inicio + fim) // 2

        if A[meio] == -1:
            esq = meio - 1
            dir = meio + 1
            encontrou_vizinho = False

            while esq >= inicio or dir <= fim:
                if esq >= inicio and A[esq] != -1:
                    meio = esq
                    encontrou_vizinho = True
                    break
                if dir <= fim and A[dir] != -1:
                    meio = dir
                    encontrou_vizinho = True
                    break
                esq -= 1
                dir += 1

            if not encontrou_vizinho:
                break

        if A[meio] == chave:
            verificador = True
            print(f"Chave {chave} encontrada na posição: {meio + 1}")
            break
        elif A[meio] < chave:
            inicio = meio + 1
        else:
            fim = meio - 1

    if not verificador:
        print(f"Chave {chave} não encontrada na lista.")


if __name__ == "__main__":
    A = [10, -1, 20, -1, 30, 40, -1, 50]
    busca_binaria_esparsa(A, 30)
    busca_binaria_esparsa(A, 99)