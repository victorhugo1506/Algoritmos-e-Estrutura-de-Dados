#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

int MaiorNoNivel(No *p, int k, int nivelAtual)
{
    if (p == NULL || nivelAtual > k)
        return -1;

    if (nivelAtual == k)
        return p->valor;

    int maiorDir = MaiorNoNivel(p->dir, k, nivelAtual + 1);
    if (maiorDir != -1)
        return maiorDir;

    return MaiorNoNivel(p->esq, k, nivelAtual + 1);
}