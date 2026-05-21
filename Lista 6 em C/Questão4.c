#include <stdio.h>

#define MAX 100
char pilha[MAX];
int topo = 0;

void Empilha(char c)
{
    pilha[topo++] = c;
}

char Desempilha()
{
    return pilha[--topo];
}

int PilhaVazia()
{
    return topo == 0;
}

int main()
{
    char string[] = "ESTE EXERCICIO E MUITO FACIL";
    int i = 0;
    int verificador = 0;

    printf("Original: %s\nInvertida: ", string);

    while (verificador == 0)
    {
        if (string[i] != ' ' && string[i] != '\0')
        {
            Empilha(string[i]);
        }
        else
        {
            while (!PilhaVazia())
            {
                printf("%c", Desempilha());
            }

            if (string[i] == ' ')
            {
                printf(" ");
            }
            else if (string[i] == '\0')
            {
                verificador = 1;
                break;
            }
        }
        i++;
    }
    printf("\n");

    return 0;
}