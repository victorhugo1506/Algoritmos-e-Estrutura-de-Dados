V = [9, 42, 21, 14, 28, 3, 19, 32, 46, 6]
maior_impar = 0

for num in V:
    if num % 2 != 0 and num > maior_impar:
        maior_impar = num

print(f"O maior numero impar da lista eh: {maior_impar}")
