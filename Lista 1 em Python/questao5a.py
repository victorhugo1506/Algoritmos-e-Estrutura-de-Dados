V = [9, 42, 21, 14, 25, 3, 19, 33, 45, 6]

numero_para_procurar = int(input("Digite um numero para ser procurado na lista e ver se tem o dobro dele: "))
dobro_do_numero = 0

for num in V:
    if num == numero_para_procurar * 2:
        dobro_do_numero = num

for num in V:
    if num == numero_para_procurar:
        print(f"{numero_para_procurar} foi encontrado")
        if dobro_do_numero != 0:
            print(f"E {dobro_do_numero}, que eh o dobro de {numero_para_procurar}, foi encontrado")
        else:
            print("Mas o seu dobro nao esta na lista")

print("Seu numero nao esta na lista")
