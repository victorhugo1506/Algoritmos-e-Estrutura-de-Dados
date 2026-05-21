// questao_1.c
#include <stdio.h>

int main()
{
    char expr[] = "4+(3*(5+2()*5";
    int saldo = 0;
    int verificador = 0;

    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] == '(')
        {
            saldo++;
        }
        else if (expr[i] == ')')
        {
            saldo--;
        }

        if (saldo < 0)
        {
            verificador = 1;
            printf("Erro: Parentese ')' sobrando na posicao %d\n", i + 1);
            break;
        }

        if (verificador == 0 && saldo > 0)
        {
            verificador = 1;
            printf("Erro: Faltou fechar %d parentese(s).\n", saldo);
        }

        if (verificador == 0)
        {
            printf("A expressao esta balanceada com sucesso!\n");
        }

        return 0;
    }