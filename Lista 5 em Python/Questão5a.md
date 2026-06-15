Questão 5, Letra A:

O algoritmo realiza primeiro uma busca binária na parte ordenada, que possui tamanho proporcional a $\sqrt{n}$. Se o elemento não for encontrado, faz uma busca linear no buffer da parte desordenada.O tempo de execução no pior caso ocorre quando o elemento não está na estrutura ou está na última posição da parte desordenada. A busca binária custa $O(\log n)$ e a busca linear custa $O(\sqrt{n})$, totalizando um tempo assintótico de $O(\sqrt{n})$.
