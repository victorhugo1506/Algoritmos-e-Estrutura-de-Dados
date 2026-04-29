V = [9, 2, 7, 7, 2, 2, 1, 7, 7, 9]

impar_para_encontrar = int(input("Digite um numero impar para ser procurado na lista e ver se ele se repete: "))
contador = 0

for num in V:
    if num == impar_para_encontrar:
        contador += 1
    elif num != impar_para_encontrar and num % 2 != 0:
        print(f"O numero {impar_para_encontrar} nao esta presente na lista.")
        exit()

print(f"O numero {impar_para_encontrar} aparece {contador} vezes na lista.")
