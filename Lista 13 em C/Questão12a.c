#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq, *dir;
} No;

void CaminhoMaisLongoRec(No *p, int caminhoAtual[], int nivel, int caminhoLongo[], int *maxNivel)
{
    if (p == NULL)
        return;

    caminhoAtual[nivel] = p->valor;

    if (p->esq == NULL && p->dir == NULL)
    {
        if (nivel > *maxNivel)
        {
            *maxNivel = nivel;
            for (int i = 0; i <= nivel; i++)
            {
                caminhoLongo[i] = caminhoAtual[i];
            }
        }
    }

    CaminhoMaisLongoRec(p->esq, caminhoAtual, nivel + 1, caminhoLongo, maxNivel);
    CaminhoMaisLongoRec(p->dir, caminhoAtual, nivel + 1, caminhoLongo, maxNivel);
}

void ImprimeCaminhoMaisLongo(No *p)
{
    int caminhoAtual[1000];
    int caminhoLongo[1000];
    int maxNivel = -1;

    CaminhoMaisLongoRec(p, caminhoAtual, 0, caminhoLongo, &maxNivel);

    for (int i = 0; i <= maxNivel; i++)
    {
        printf("%d", caminhoLongo[i]);
        if (i < maxNivel)
            printf(" -> ");
    }
    printf("\n");
}