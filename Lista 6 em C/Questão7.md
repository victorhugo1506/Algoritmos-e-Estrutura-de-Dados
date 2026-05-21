Questão 7:

A complexidade amortizada das operações é **$O(1)$**
Para a maioria das chamadas, desenfileirar (retirar do vetor de saída) leva $O(1)$. A cópia invertida do vetor de entrada para o de saída consome tempo $O(n)$. No entanto, isso só ocorre após o vetor de saída ser completamente esvaziado, o que significa que passamos por $n$ operações independentes de tempo $O(1)$. Diluindo o custo $O(n)$ desse evento raro pelas $n$ operações acumuladas, o custo final amortizado volta a ser $O(1)$.
