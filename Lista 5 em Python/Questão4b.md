Questão 4, Letra B: 

Para um sistema com muitas buscas e poucas inserções, a escolha de $k$ deve ser menor que $\sqrt{n}$.
Porque o tempo da busca é $O(k \cdot \log(n/k))$. 
Ao diminuir o valor de $k$ (o que significa criar menos sublistas, porém mais longas), reduzimos o fator multiplicativo da busca, aproximando o seu tempo ao logaritmo ideal de uma lista ordenada tradicional. 
O custo negativo dessa ação é o aumento no tempo de inserção ($O(n/k)$), mas como o sistema faz poucas inserções, esse gargalo não impactará o desempenho geral.
