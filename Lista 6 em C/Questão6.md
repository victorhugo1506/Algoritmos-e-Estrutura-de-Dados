Questão 6:

* **A:** Utilizando apenas um vetor simples, para que os elementos mantenham a estrutura de fila após inserir exatamente no meio via `putMed`, é obrigatório deslocar todos os elementos da metade final do vetor uma posição para a direita. O tempo desse deslocamento é $O(n)$ no pior caso, o que viola explicitamente a restrição de implementar todas as operações em tempo $O(1)$
* **B:** A estrutura ideal seria composta por **duas Filas Duplamente Encadeadas (Deques)** e um ponteiro de controle de tamanho.
  * *Deque Esquerda (Frente)* guarda a primeira metade; *Deque Direita (Fundo)* guarda a segunda metade.
  * **ENFILEIRA (Fundo):** Adiciona no fim do Deque Direita $O(1)$. Se a direita ficar desbalanceada em mais de 1 item, remove da frente da direita e insere no fim da esquerda $O(1)$.
  * **DESENFILEIRA (Frente):** Remove da frente do Deque Esquerda $O(1)$. Se desbalancear, ajusta movendo da frente da direita pro fim da esquerda $O(1)$.
  * **getMed:** Apenas consulta o elemento do fim do Deque Esquerda $O(1)$.
  * **putMed:** Insere diretamente no fim do Deque Esquerda $O(1)$. Se a esquerda ultrapassar a direita em mais de 1, move o último da esquerda pro início da direita $O(1)$.
* **C (Desafio):** Não é possível generalizar essa estrutura para um $k$ genérico arbitrário operando em $O(1)$. Ao criar ponteiros para extremidades e o meio, fracionamos o acesso direto em 2. Para suportar qualquer posição $k$ em $O(1)$, precisaríamos de mapeamento contínuo (como arrays), que por sua vez sofrem no deslocamento $O(n)$ durante inserções, gerando um trade-off insolúvel sem relaxar o $O(1)$.
