V = [5, 3, 1, 10, 2, 13, 9, 12, 4, 7]

media = sum(V) / len(V)

menor_distancia = V[0]
for i, num in enumerate(V):
    if i == 0:
        menor_distancia = num
    elif abs(num - media) < abs(menor_distancia - media):
        menor_distancia = num

print(f"A media eh: {media:.2f}")
print(f"O valor mais proximo da media eh: {menor_distancia:.2f}")
print("E seu tempo de execucao eh O(n), porque percorre o vetor apenas uma vez para calcular a media e outra vez para encontrar o valor mais proximo da media.")
