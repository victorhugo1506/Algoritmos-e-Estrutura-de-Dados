Questão 5, Letra C:

Caso o elemento seja encontrado na parte desordenada, a remoção é feita substituindo o elemento alvo pelo último elemento do buffer desordenado, sem precisar fazer deslocamentos em massa. O tempo de execução neste caso é $O(1)$.Caso o elemento seja encontrado na parte ordenada, é necessário removê-lo e deslocar todos os elementos situados à sua direita uma posição para a esquerda para preencher a lacuna. Como o tamanho da parte ordenada escala com $\sqrt{n}$, o tempo de execução neste caso é $O(\sqrt{n})$.
