# 📖 Aula 04 — Busca Binária e Ordenação

> Algoritmos rápidos para busca e ordenação

---

# 1. Introdução

Algoritmos `O(n)` podem ser lentos quando:

- a lista é muito grande;
- muitas buscas são necessárias.

A solução apresentada nesta aula é:

> reduzir drasticamente o número de elementos examinados.

---

# 2. Busca Binária

## Ideia Central

Se a lista está ordenada:

- não precisamos examinar todos os elementos.

A estratégia é:

- olhar primeiro para o elemento do meio.

---

## Casos

Se `L[m] == k`

- encontramos o elemento.

Se `L[m] > k`

- continuamos na metade esquerda.

Se `L[m] < k`

- continuamos na metade direita.

---

## Pseudocódigo

```pseudo
i = 1
j = n

Enquanto (i <= j)
{
    m = (i + j) / 2

    Se (L[m] == k)
        Retorna SIM

    Se (L[m] > k)
        j = m - 1

    Se (L[m] < k)
        i = m + 1
}

Retorna NÃO
```

---

## Complexidade

A cada passo:

- a faixa de busca é reduzida pela metade.

Sequência do tamanho:

```math
n, \frac{n}{2}, \frac{n}{4}, \frac{n}{8}, ...
```

Logo:

```math
O(\log_2 n)
```

### Exemplo

```math
\log_2(1.000.000) \approx 20
```

Ou seja:

- apenas cerca de 20 comparações para buscar em 1 milhão de elementos.

---

# 3. Algoritmos Básicos de Ordenação

## Ordenação por Seleção

### Ideia

- encontrar o maior elemento;
- colocá-lo na última posição;
- repetir o processo.

### Complexidade

```math
O(n^2)
```

---

# 4. Varredura

## Ideia

Percorrer a lista:

- trocando elementos vizinhos fora de ordem.

---

## Pseudocódigo

```pseudo
Para i = 1 até n-1
{
    Se (L[i] > L[i+1])
        troca(L[i], L[i+1])
}
```

### Complexidade da Varredura

```math
O(n)
```

---

# 5. Ordenação da Bolha

## Estratégia

Executar várias varreduras:

- até que a lista esteja totalmente ordenada.

### Complexidade

```math
O(n^2)
```

---

# 6. Melhorando o Algoritmo

## Nova Ideia

Dividir a lista:

- ordenar as metades separadamente;
- depois juntar as partes ordenadas.

---

# 7. Intercalação

## Estratégia

Usar:

- dois ponteiros;
- uma lista auxiliar.

Sempre copiar:

- o menor elemento disponível.

### Complexidade

```math
O(n)
```

---

# 8. Dividindo em 2 Partes

## Tempo Total

Ordenação das duas metades:

```math
\frac{n^2}{2}
```

Intercalação:

```math
O(n)
```

Resultado:

```math
\frac{n^2}{2} + n
```

---

# 9. Dividindo em 3 Partes

## Resultado

```math
\frac{n^2}{3} + 2n
```

---

# 10. Generalização

Dividindo em `k` blocos:

## Tempo de Ordenação

```math
O\left(\frac{n^2}{k}\right)
```

## Tempo de Intercalação

```math
(k-1) \cdot O(n)
```

## Tempo Total

```math
O\left(\frac{n^2}{k}\right) + (k-1)O(n)
```

---

# 11. Melhor Valor de k

O melhor desempenho ocorre quando:

```math
\frac{n^2}{k} = kn
```

Logo:

genui{"math_block_widget_always_prefetch_v2":{"content":"k=\sqrt{n}"}}

---

# 12. Complexidade Final

Substituindo:

```math
O(n\sqrt{n})
```

---

# 📊 Resumo Geral

| Algoritmo            | Complexidade |
| -------------------- | ------------ |
| Busca Linear         | O(n)         |
| Busca Binária        | O(log n)     |
| Bubble Sort          | O(n²)        |
| Intercalação         | O(n)         |
| Estratégia Otimizada | O(n√n)       |

---

# 🔑 Ideias Principais

- Busca binária é extremamente eficiente.
- Ordenação é essencial para acelerar buscas.
- Dividir problemas em partes menores pode melhorar o desempenho.
- Intercalação é uma ferramenta poderosa em algoritmos de ordenação.
