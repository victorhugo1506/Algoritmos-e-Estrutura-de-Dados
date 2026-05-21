// questao_5.c
#include <stdio.h>

#define MAX 100

typedef struct
{
    int itens[MAX];
    int topo;
} Pilha;

void Empilha(Pilha *p, int valor) { p->itens[p->topo++] = valor; }
int Desempilha(Pilha *p) { return p->itens[--(p->topo)]; }
int PilhaVazia(Pilha *p) { return p->topo == 0; }

void InverterPilha(Pilha *P)
{
    Pilha Aux1 = {.topo = 0}, Aux2 = {.topo = 0};

    while (!PilhaVazia(P))
        Empilha(&Aux1, Desempilha(P));
    while (!PilhaVazia(&Aux1))
        Empilha(&Aux2, Desempilha(&Aux1));
    while (!PilhaVazia(&Aux2))
        Empilha(P, Desempilha(&Aux2));
}

int VerificaPalindromo(Pilha *P, int tamanho)
{
    Pilha Aux = {.topo = 0};
    int original[MAX];
    int verificador = 1;
    int i = 0;

    while (!PilhaVazia(P))
    {
        int letra = Desempilha(P);
        original[i++] = letra;
        Empilha(&Aux, letra);
    }

    for (int j = 0; j < tamanho; j++)
    {
        if (Desempilha(&Aux) != original[j])
        {
            verificador = 0;
            break;
        }
    }

    return verificador;
}