#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[] = {9, 42, 21, 14, 25, 3, 19, 33, 45, 6};
    int numeroparaprocurar = 0;
    int dobrodonumero = 0;
    int aux = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (V[j] > V[i])
            {
                aux = V[j];
                V[j] = V[i];
                V[i] = aux;
            }
        }
    }

    printf("Vetor Reorganizado: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", V[i]);
    }
    printf("\n");

    printf("Digite um numero para ser procurado na lista e ver se tem o dobro dele: ");
    scanf("%d", &numeroparaprocurar);

    for (int i = 0; i < 10; i++)
    {
        if (V[i] == (numeroparaprocurar * 2))
        {
            dobrodonumero = V[i];
            break; // achou o dobro, pode parar
        }
        if (V[i] > (numeroparaprocurar * 2))
        {
            break; // já passou do dobro, inútil continuar
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (V[i] == numeroparaprocurar)
        {
            printf("%d foi encontrado\n", numeroparaprocurar);

            if (dobrodonumero != 0)
            {
                printf("E %d, que eh o dobro de %d, foi encontrado\n", dobrodonumero, numeroparaprocurar);
            }
            else
            {
                printf("Mas o seu dobro nao esta na lista\n");
            }
            return 0;
        }
    }

    printf("Seu numero nao esta na lista\n");

    return 0;
}