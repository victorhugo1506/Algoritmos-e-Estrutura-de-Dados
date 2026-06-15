Questão 4, letra A: 

Quando a lista é dividida em $k$ partes, os tempos aproximados das operações são:
Busca: $O(k \cdot \log(n/k))$
Inserção/Remoção: $O(n/k)$
Para equilibrar os tempos das operações, devemos igualar a ordem de grandeza de seus custos. Como o logaritmo cresce de forma muito lenta em relação aos termos polinomiais, podemos focar nas variáveis principais:$$k \approx \frac{n}{k}$$
Multiplicando ambos os lados da equação por $k$, obtemos:$$k^2 = n$$$$k = \sqrt{n}$$
Derivação das Complexidades:Substituindo $k = \sqrt{n}$ nas expressões originais, obtemos os tempos finais equilibrados:
Busca: $O(\sqrt{n} \cdot \log(n/\sqrt{n}))$. 
Como $\log(n^{1/2}) = \frac{1}{2}\log n$, e descartamos constantes na notação Big-O, o tempo da busca é $O(\sqrt{n} \log n)$.
Inserção: Substituindo diretamente em $O(n/k)$, temos $O(n/\sqrt{n})$, que simplifica exatamente para $O(\sqrt{n})$.