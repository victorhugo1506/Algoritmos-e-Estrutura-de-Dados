V = [9, 42, 21, 14, 28, 3, 19, 32, 46, 6]

numero1 = V[0]
numero2 = V[1]
menor_distancia = abs(numero2 - numero1)

print(*V)

for i in range(len(V)):
    for j in range(i + 1, len(V)):
        distancia_atual = abs(V[j] - V[i])
        if distancia_atual < menor_distancia:
            menor_distancia = distancia_atual
            numero1 = V[i]
            numero2 = V[j]

print(f"A menor distancia eh {menor_distancia} e eh entre os numeros {numero2} e {numero1}")
