#include <stdio.h>
#include <ctype.h>

#define MAX 100
int pilha[MAX];
int topo = 0;

void Empilha(int val) { pilha[topo++] = val; }
int Desempilha() { return pilha[--topo]; }

int main()
{
    char expr[] = "53+2*";
    int i = 0;
    int verificador = 0;

    while (expr[i] != '\0')
    {
        if (isdigit(expr[i]))
        {
            Empilha(expr[i] - '0');
        }
        else
        {
            if (topo < 2)
            {
                verificador = 1;
                printf("Erro na expressao!\n");
                break;
            }
            int val2 = Desempilha();
            int val1 = Desempilha();

            if (expr[i] == '+')
                Empilha(val1 + val2);
            else if (expr[i] == '-')
                Empilha(val1 - val2);
            else if (expr[i] == '*')
                Empilha(val1 * val2);
            else if (expr[i] == '/')
                Empilha(val1 / val2);
        }
        i++;
    }

    if (verificador == 0)
    {
        printf("Resultado da avaliacao pos-fixa: %d\n", Desempilha());
    }

    return 0;
}