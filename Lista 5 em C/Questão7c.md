Questão 7, Letra C:

Sim, a presença de posições vazias piora consideravelmente a garantia de tempo da busca.Em uma lista ordenada tradicional, o tempo é rigidamente limitado a $O(\log n)$. Na lista esparsa, a necessidade de escapar dos buracos através de passos lineares corrompe a divisão pura pela metade, aproximando o custo de uma busca sequencial se houver má distribuição.
