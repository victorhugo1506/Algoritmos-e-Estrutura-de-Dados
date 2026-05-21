Questão 10:

No Quicksort iterativo, a pilha pode conter no máximo **$O(\log n)$** faixas simultaneamente se for perfeitamente otimizado. No entanto, se o algoritmo **não otimizar** o lado do pivô e simplesmente empilhar as partições indiscriminadamente, no pior caso (vetor já ordenado) a partição reduz o tamanho do problema de $n$ para $n-1$, fazendo com que a pilha chegue ao tamanho limite máximo de **$O(n)$** antes de esvaziar.
