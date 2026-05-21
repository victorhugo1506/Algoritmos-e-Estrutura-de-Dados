#include <stdio.h>

#define MAX 100
int fila[MAX];
int frente = 0, fundo = 0, qtd = 0;

void Enfileira(int elem)
{
    fila[fundo] = elem;
    fundo = (fundo + 1) % MAX;
    qtd++;
}

int Desenfileira()
{
    int valor = fila[frente];
    frente = (frente + 1) % MAX;
    qtd--;
    return valor;
}

void ExcluirNegativos()
{
    int tamanho_original = qtd;
    int verificador = 0;

    if (tamanho_original == 0)
    {
        verificador = 1;
    }

    if (verificador == 0)
    {
        for (int i = 0; i < tamanho_original; i++)
        {
            int valor = Desenfileira();
            if (valor >= 0)
            {
                Enfileira(valor);
            }
        }
    }
}