# 📖 Aula 03 — Trabalhando com Listas Ordenadas

> Comparando algoritmos em listas ordenadas e desordenadas

---

# 1. Introdução

Na aula anterior vimos que, em vários casos, trabalhar com listas ordenadas pode deixar os algoritmos muito mais rápidos.

Nesta aula veremos:

- exemplos onde listas ordenadas ajudam bastante;
- situações em que elas não ajudam;
- operações clássicas sobre listas;
- algoritmos de ordenação e particionamento.

---

# 2. Remoção de Duplicados

## Caso Desordenado

### Objetivo
> Remover elementos repetidos de uma lista.

### Ideia

Para cada elemento da lista:
- verificar se ele já apareceu antes;
- se apareceu, marcar com `0`;
- depois mover todos os `0` para o final.

### Estratégia

- percorre a lista procurando duplicatas;
- usa dois ponteiros (`i` e `j`) para empurrar os zeros para o final.

### Complexidade

```math
O(n^2)
```

Porque:
- para cada elemento, percorremos boa parte da lista novamente.

---

## Caso Ordenado

### Ideia Inteligente

Se a lista está ordenada:
- basta comparar o elemento atual com o anterior;
- se forem iguais, encontramos uma duplicata imediatamente.

Depois:
- zeramos duplicatas;
- movemos os zeros para o final.

### Complexidade

```math
O(n)
```

### Conclusão

| Caso | Complexidade |
|---|---|
| Desordenado | O(n²) |
| Ordenado | O(n) |

---

# 3. Elementos Comuns entre Duas Listas

## Problema

> Imprimir os elementos que aparecem nas duas listas.

---

## Caso Desordenado

### Estratégia

Para cada elemento de `U`:
- procurar esse elemento em `V`.

### Complexidade

```math
O(n^2)
```

---

## Caso Ordenado

### Estratégia

Usar dois ponteiros:
- um em cada lista;
- comparar os elementos atuais;
- avançar o ponteiro do menor elemento.

### Complexidade

```math
O(n)
```

### Conclusão

| Caso | Complexidade |
|---|---|
| Desordenado | O(n²) |
| Ordenado | O(n) |

---

# 4. Operação de Inserção

## Caso Desordenado

### Estratégia

Inserir o elemento:
- diretamente na primeira posição vazia.

### Complexidade

```math
O(1)
```

---

## Caso Ordenado

### Estratégia

- encontrar a posição correta;
- deslocar os elementos para frente;
- inserir o novo valor.

### Complexidade

```math
O(n)
```

### Conclusão

Neste caso:
- a versão desordenada é mais rápida.

---

# 5. Operação de Remoção

## Caso Desordenado

### Estratégia

- localizar o elemento;
- substituir pelo último elemento da lista;
- diminuir o tamanho lógico da lista.

### Complexidade

```math
O(n)
```

---

## Caso Ordenado

### Estratégia

- localizar o elemento;
- deslocar todos os elementos seguintes uma posição para a esquerda.

### Complexidade

```math
O(n)
```

### Conclusão

| Caso | Complexidade |
|---|---|
| Desordenado | O(n) |
| Ordenado | O(n) |

---

# 6. Operação de Atualização

## Problema

> Encontrar `x` e atualizar para `y`.

### Observação

Se a lista está ordenada:
- atualizar pode quebrar a ordenação.

Então:
- se `y < x`, talvez seja necessário mover o elemento para a esquerda;
- se `y > x`, talvez seja necessário mover o elemento para a direita.

### Complexidade

```math
O(n)
```

---

# 7. Procedimento de Intercalação

## Situação

A primeira metade e a segunda metade da lista já estão ordenadas.

### Objetivo

> Combinar as duas metades em uma única lista ordenada.

---

## Estratégia

Usar:
- dois ponteiros;
- uma lista auxiliar.

A cada passo:
- copiar o menor elemento para a lista auxiliar.

Depois:
- copiar os elementos de volta.

### Complexidade

```math
O(n)
```

---

# 8. Algoritmo de Ordenação

## Ideia Básica

- colocar o maior elemento na última posição;
- depois o segundo maior;
- depois o terceiro maior;
- e assim por diante.

### Estratégia

- encontrar o maior elemento;
- trocar com a última posição disponível.

### Complexidade

```math
O(n^2)
```

---

# 9. Particionamento

## Ideia

Escolher um pivô `k`:
- elementos menores ficam à esquerda;
- elementos maiores ficam à direita.

Depois:
- ordenar cada lado separadamente.

---

## Estratégia

Usar dois ponteiros:
- `i` procura elementos maiores que `k`;
- `j` procura elementos menores que `k`.

Quando ambos encontram:
- ocorre troca.

### Complexidade da Partição

```math
O(n)
```

---

## Melhor Caso

O pivô divide a lista ao meio.

### Resultado

```math
\frac{n^2}{2} + n
```

---

## Pior Caso

O pivô vai para uma extremidade.

### Resultado

```math
(n-1)^2
```

---

# 📊 Resumo Geral

| Problema | Lista Ordenada | Lista Desordenada |
|---|---|---|
| Remover duplicados | O(n) | O(n²) |
| Interseção | O(n) | O(n²) |
| Inserção | O(n) | O(1) |
| Remoção | O(n) | O(n) |

---

# 🔑 Ideias Principais

- Listas ordenadas podem acelerar bastante alguns algoritmos.
- Nem toda operação fica mais rápida em listas ordenadas.
- Técnicas com dois ponteiros aparecem frequentemente.
- Intercalação é uma ideia central em algoritmos eficientes.
