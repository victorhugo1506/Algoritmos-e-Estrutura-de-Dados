# Estruturas de Dados

## Aula 05: Multilistas e Listas Esparsas

---

## 1. Introdução

**O que é melhor: manter a lista ordenada ou manter a lista desordenada?**

Bom, isso depende...

- A **busca na lista desordenada** leva tempo **O(n)** — no pior caso, todos os elementos precisam ser examinados.
- A **busca na lista ordenada** pode ser feita em tempo **O(log n)**.

Por outro lado:

- A **inserção na lista desordenada** leva tempo **O(1)**: basta colocar o novo elemento na primeira posição vazia (a ordem não importa).
- A **inserção na lista ordenada** pode levar tempo **O(n)** — no pior caso, a inserção é feita na primeira posição e todos os elementos são deslocados para a direita.

Quanto à remoção:

- Na **lista desordenada**, leva tempo **O(n)**: a remoção em si é O(1) (move-se o último elemento para a posição removida), mas é preciso fazer a busca primeiro.
- Na **lista ordenada**, a busca leva O(log n), mas a remoção pode levar **O(n)** — quando se remove o primeiro elemento.

### Resumo das complexidades

| Operação | Lista Desordenada | Lista Ordenada |
| -------- | :---------------: | :------------: |
| Busca    |       O(n)        |    O(log n)    |
| Inserção |       O(1)        |      O(n)      |
| Remoção  |       O(n)        |      O(n)      |

---

## 2. Multilistas

A ideia é dividir a lista ordenada em partes menores para melhorar os tempos de inserção e remoção.

### Dividindo em 2 partes

Dividimos a lista na metade, sendo que ambas as partes permanecem ordenadas:

```
L:  [ parte 1 (1..n/2) | parte 2 (n/2+1..n) ]
```

- **Busca:** precisa buscar nas duas partes no pior caso → `log₂(n/2) + log₂(n/2) ≈ 2·log₂(n)`
- **Inserção:** sempre feita na segunda parte, em duas etapas:
  1. Colocar o novo elemento na primeira posição vazia — O(1)
  2. Deslocá-lo até sua posição correta — no máximo `n/2` trocas
  - **Tempo total ≈ n/2**
- **Remoção:** busca + deslocamento de no máximo `n/2` posições → **Tempo ≈ n/2**

### 2.1 Repetindo a esperteza

Dividindo em **3 partes**:

- Busca → `3·log n` (aprox.)
- Inserção e Remoção → `n/3` (aprox.)

Para **k partes**, os tempos ficam:

| Operação | Tempo (aprox.)     |
| -------- | ------------------ |
| Busca    | k · log(n/k)       |
| Inserção | n/k                |
| Remoção  | k · log(n/k) + n/k |

> **Qual é o número de partes ótimo?** Depende do contexto: se há muitas buscas, minimize o tempo de busca; se há muitas inserções/remoções, minimize esses tempos.

### Multilista com blocos de tamanho √n

A estrutura **multilista** corresponde a dividir a lista em blocos de tamanho **√n**:

```
L: [ √n ] [ √n ] [ √n ] ...
```

#### Complexidades da Multilista

| Operação |  Multilista   |
| -------- | :-----------: |
| Busca    | O(√n · log n) |
| Inserção |     O(√n)     |
| Remoção  | O(√n · log n) |

---

### 2.2 Algoritmos para Multilistas

#### Busca

Consiste em realizar busca binária em cada sublista:

```
função busca-Multilista(k, L[1..n], m)
{
    Para j <-- 0 Até piso(m / raiz(n))
    {
        i <-- j * raiz(n) + 1           // início da (j+1)-ésima sublista
        f <-- Min{ m, (j+1) * raiz(n) } // fim da (j+1)-ésima sublista
        resp <-- busca-Binária(k, L[i..f])
        Se (resp = SIM) Retorna (SIM)
    }
    Retorna (NÃO)
}
```

#### Inserção

A inserção sempre ocorre na última parte da lista:

```
função inserção-Multilista(k, L[1..n], m)
{
    i <-- piso(m / raiz(n)) * raiz(n) + 1  // início da última sublista
    m++; L[m] <-- k                         // inserção no fim
    j <-- m

    Enquanto (j > i)                        // deslocamento
    {
        Se (L[j] < L[j-1])
        {
            aux <-- L[j]
            L[j] <-- L[j-1]
            L[j-1] <-- aux
        }
        Senão Break
    }
}
```

#### Remoção

A remoção busca o elemento, move o último da última sublista para sua posição e realiza o deslocamento:

```
função remoção-Multilista(k, L[1..n], m)
{
    pos <-- busca-Multilista(k, L[1..n], m)
    Se (pos = 0) Retorna   // elemento não encontrado

    L[pos] <-- L[m]; m--

    Se (L[m] < k)          // deslocamento para trás
    {
        i <-- piso(pos / raiz(n)) * raiz(n) + 1  // início da sublista de k
        j <-- pos
        Enquanto (j > i)
        {
            Se (L[j] < L[j-1])
            {
                aux <-- L[j]
                L[j] <-- L[j-1]
                L[j-1] <-- aux
            }
            Senão Break
        }
    }

    Se (L[m] > k)          // deslocamento para frente
    {
        f <-- piso(pos / raiz(n) + 1) * raiz(n)  // fim da sublista de k
        j <-- pos
        Enquanto (j < f)
        {
            Se (L[j] < L[j+1])
            {
                aux <-- L[j]
                L[j] <-- L[j+1]
                L[j+1] <-- aux
            }
            Senão Break
        }
    }
}
```

---

## 3. Listas Esparsas

Uma abordagem diferente para melhorar os tempos de inserção e remoção.

### Motivação

O pior caso da inserção em lista ordenada ocorre porque as posições vazias estão todas no final. Se as posições vazias estivessem distribuídas ao longo da lista, o deslocamento máximo seria reduzido:

- Com posições vazias no **início e no fim** → pior caso: inserção no meio → deslocamento de no máximo **n/2** elementos.
- Com posições vazias **espalhadas** → inserção envolve deslocamento de no máximo **n/4** elementos (ou menos).

### Ideia central

Cada posição da lista possui um campo `L[j].vazia`, indicando se está vazia ou não. As posições vazias podem estar em qualquer lugar da lista.

**Remoção:** leva tempo **O(1)** (sem contar a busca) — basta marcar a posição como vazia:

```
L[j].vazia = Sim
```

**Inserção:** realizada em 4 etapas:

1. Busca binária para localizar a posição de inserção
2. Localizar a posição vazia mais próxima
3. Deslocar os elementos até lá, liberando a posição de inserção
4. Inserir o elemento

```
função Inserção-LE(k, L)
{
    pos <-- busca_Binária-LE(k, L)
    j = pos

    Enquanto (L[j].vazia != Sim)   // localiza posição vazia mais próxima
        j++

    L[j].vazia <-- Não

    Enquanto (j > pos)             // deslocamento dos elementos
    {
        L[j-1] = L[j]; j--
    }

    L[pos] <-- k                   // insere o novo elemento
}
```

### Análise do tempo de inserção

O tempo total é composto por:

- Tempo da busca binária
- Tempo da procura pela posição vazia mais próxima
- Tempo do deslocamento

Os dois últimos dependem da distribuição das posições vazias. Assumindo:

- **90%** de posições ocupadas e **10%** de posições vazias
- Posições vazias **bem distribuídas** ao longo da lista

Em média, uma posição vazia é encontrada a cada 10 posições. Nessas condições:

- `Vazia_próxima()` leva tempo **O(1)**
- O deslocamento também leva tempo **O(1)**

> **Conclusão:** o tempo da inserção é basicamente o tempo da busca binária.

### 3.1 Busca binária na lista esparsa

_(a ser desenvolvido)_
