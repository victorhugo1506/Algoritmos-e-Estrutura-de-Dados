def intercalar(A, B):
    resultado = []
    i, j = 0, 0

    while i < len(A) and j < len(B):
        if A[i] <= B[j]:
            resultado.append(A[i])
            i += 1
        else:
            resultado.append(B[j])
            j += 1

    resultado.extend(A[i:])
    resultado.extend(B[j:])
    return resultado


def main():
    multilista = [
        [12, 33, 45],
        [7, 56, 91],
        [14, 22, 89],
    ]

    if not multilista:
        print("A multilista está vazia.")
        return
    
    lista_final = multilista[0][:]

    for i in range(1, len(multilista)):
        lista_final = intercalar(lista_final, multilista[i])

    print("Lista completamente ordenada:\n")
    for i, valor in enumerate(lista_final):
        print(f"Posição {i + 1}: {valor}")


if __name__ == "__main__":
    main()