V = [9, 42, 21, 14, 25, 3, 19, 33, 45, 6]

numero_para_procurar = int(input("Digite um numero para ser procurado na lista: "))

numero_mais_proximo = V[0]
menor_distancia = abs(V[0] - numero_para_procurar)

for num in V:
    if num == numero_para_procurar:
        print(f"O numero {numero_para_procurar} esta presente na lista.")

    distancia_atual = abs(num - numero_para_procurar)
    if distancia_atual < menor_distancia:
        menor_distancia = distancia_atual
        numero_mais_proximo = num

print(f"O numero {numero_para_procurar} nao esta presente na lista. Porem, o numero mais proximo eh {numero_mais_proximo}.")
