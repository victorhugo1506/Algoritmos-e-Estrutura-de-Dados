#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

int ContaNosNoNivel(No *p, int k, int nivelAtual)
{
    if (p == NULL || nivelAtual > k)
        return 0;

    if (nivelAtual == k)
        return 1;

    return ContaNosNoNivel(p->esq, k, nivelAtual + 1) +
           ContaNosNoNivel(p->dir, k, nivelAtual + 1);
}

int NivelCompleto(No *p, int k)
{
    int cont = ContaNosNoNivel(p, k, 1);
    int esperado = 1 << (k - 1); // 2^(k-1)
    return (cont == esperado) ? 1 : 0;
}