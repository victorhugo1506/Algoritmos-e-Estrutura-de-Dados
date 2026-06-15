def main():
    D = [45, 12, 89, 33, 7, 56, 91, 22, 14]
    n = len(D)
    k = 3
    elementos_por_lista = n // k

    multilista = []
    idx = 0
    for i in range(k):
        sublista = []
        for j in range(elementos_por_lista):
            sublista.append(D[idx])
            idx += 1
        multilista.append(sublista)

    for i in range(k):
        for j in range(elementos_por_lista - 1):
            verificador = False
            for l in range(elementos_por_lista - j - 1):
                if multilista[i][l] > multilista[i][l + 1]:
                    multilista[i][l], multilista[i][l + 1] = multilista[i][l + 1], multilista[i][l]
                    verificador = True
            if not verificador:
                break

    print("Multilista construída e ordenada\n")
    for i in range(k):
        print(f"Sublista {i + 1}: {' '.join(str(x) for x in multilista[i])}")


if __name__ == "__main__":
    main()