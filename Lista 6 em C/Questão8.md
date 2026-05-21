Questão 8:

* **Pilha usando duas filas:**
  * **EMPILHA:** Adiciona o novo elemento na *Fila 1* $O(1)$.
  * **DESEMPILHA:** Move $n-1$ elementos da *Fila 1* para a *Fila 2*, remove o último que sobrou (que era o topo) $O(n)$, depois inverte os nomes das filas.
* **Fila usando duas pilhas:**
  * **ENFILEIRA:** Dá o push sempre na *Pilha 1* $O(1)$.
  * **DESENFILEIRA:** Se a *Pilha 2* estiver vazia, transfere tudo da *Pilha 1* para ela invertendo a ordem $O(n)$. Em seguida, faz o pop na *Pilha 2*. Como essa transferência completa e pesada ocorre raramente, o tempo no pior caso é $O(n)$, mas o amortizado é de $O(1)$.
