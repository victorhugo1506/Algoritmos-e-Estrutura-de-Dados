#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

int ContaAbaixoDoNivel(No *p, int k, int nivelAtual)
{
    if (p == NULL)
        return 0;

    int cont = (nivelAtual > k) ? 1 : 0;

    return cont +
           ContaAbaixoDoNivel(p->esq, k, nivelAtual + 1) +
           ContaAbaixoDoNivel(p->dir, k, nivelAtual + 1);
}