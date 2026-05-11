# Estruturas de Dados

## Aula 02: Análise de Algoritmos

---

## 1. Introdução

Agora que os nossos algoritmos já foram escritos, está na hora de perguntar:

> **Será que o meu algoritmo é bom?**

Mas, antes disso, o que é um algoritmo bom?

Um algoritmo é bom se ele está **correto** e se ele é **rápido**.

É bem difícil ter a certeza absoluta de que o nosso algoritmo funciona corretamente em todos os casos possíveis. Então, vamos deixar essa questão de lado nesse momento.

E vamos passar para o outro lado da questão:

> **O que é um algoritmo rápido?**

Um algoritmo é rápido se ele não fica dando voltas por todo lado. Ou melhor, se ele não dá mais voltas do que o necessário para resolver o problema.

No final das contas, um algoritmo é só uma coisa que fica dando voltas — i.e., uma estrutura de repetição com alguma lógica dentro. Então, para saber se o algoritmo é rápido, basta contar quantas voltas ele dá.

---

## 2. Análise de Algoritmos

Considere novamente a tarefa:

> **Encontrar o maior elemento de uma lista**

Na primeira aula apresentamos o seguinte algoritmo para esse problema:

```
M <-- L[1]; Mpos <-- 1          // O(1)
Para i <-- 2 Até N              // n - 1 voltas
{
    Se ( L[i] > M )             // O(1)
    {
        M <-- L[i]; Mpos <-- i
    }
}
Imprime ("O maior elemento é:", M)  // O(1)
```

Observações:

- O laço sempre dá **n − 1** voltas
- Antes e depois do laço existem instruções que são executadas apenas uma vez — `O(1)`
- O trecho dentro do laço também é executado uma vez a cada volta — `O(1)`

Expressão para o tempo de execução:

$$O(1) + (n-1) \times O(1) + O(1) = O(n)$$

Esse resultado diz que o tempo de execução do algoritmo é **da ordem de n**, o que faz sentido porque percorrer a lista examinando cada elemento leva tempo proporcional ao seu tamanho.

---

## Exemplos

### a. O Segundo Maior

Tarefa:

> **Encontrar o segundo maior elemento da lista L**

**Versão 1:**

```
// 1ª ETAPA: localizar o maior
M <-- L[1]; Mpos <-- 1                  // O(1)
Para i <-- 2 Até n                      // n voltas
{
    Se ( L[i] > M )                     // O(1)
    {
        M <-- L[i]; Mpos <-- i
    }
}

// 2ª ETAPA: trocar maior com primeiro
Aux <-- L[1]; L[1] <-- L[Mpos]; L[Mpos] <-- Aux  // O(1)

// 3ª ETAPA: encontrar segundo maior
M2 <-- L[2];                            // O(1)
Para i <-- 3 Até n                      // n voltas
{
    Se ( L[i] > M )                     // O(1)
    {
        M2 <-- L[i];
    }
}
Imprime ("O segundo maior é:", M2)      // O(1)
```

Estimativa:

$$O(1) + n \times O(1) + O(1) + O(1) + n \times O(1) + O(1) = 2 \cdot O(n)$$

---

**Versão 2:**

```
Se ( L[1] > L[2] )                      // O(1)
{ M1 <-- L[1]; M2 <-- L[2] }
Senão
{ M1 <-- L[2]; M2 <-- L[1] }

Para i <-- 3 Até n                      // n voltas
{
    Se ( L[i] > M1 )                    // O(2)
    {
        M2 <-- M1; M1 <-- L[i]
    }
    Senão Se ( L[i] > M2 )
    {
        M2 <-- L[i]
    }
}
Imprime ("O segundo maior é:", M2)      // O(1)
```

Estimativa:

$$O(1) + n \times O(1) + O(1) = O(n)$$

**Conclusão:**

| Versão   | Complexidade |
| -------- | ------------ |
| Versão 1 | O(n)         |
| Versão 2 | O(n)         |

Assumindo que `2·O(n)` e `O(n)` são equivalentes na análise, os dois algoritmos são **igualmente eficientes**. Ambos executam em tempo proporcional ao tamanho da lista.

---

### b. Busca

Tarefa:

> **Verificar se o número x está na lista L ou não**

```
// Caso não ordenado
Aux <-- 0                               // O(1)
Para i <-- 1 Até n                      // n voltas (pior caso)
{
    Se ( L[i] = x )                     // O(1)
    {
        Aux <-- i
        Break
    }
}
Se ( Aux != 0 ) Imprime("Sim");
Senão Imprime("Não");

// Caso ordenado
Aux <-- 0                               // O(1)
Para i <-- 1 Até n                      // n voltas (pior caso)
{
    Se ( L[i] = x )                     // O(1)
    {
        Aux <-- i; Break
    }
    Se ( L[i] > x ) Break
}
Se ( Aux != 0 ) Imprime("Sim");
Senão Imprime("Não");
```

No **pior caso**, os laços de ambos os algoritmos realizam **n voltas**.

**Conclusão:**

| Caso         | Complexidade |
| ------------ | ------------ |
| Não ordenado | O(n)         |
| Ordenado     | O(n)         |

O ganho de eficiência do caso ordenado não aparece nesta análise, o que pode ser interpretado como uma limitação do método. Por outro lado, pode-se argumentar que **ganhos de eficiência só são significativos se aparecem na análise**.

---

### c. Elemento Repetido

Tarefa:

> **Verificar se a lista contém algum elemento repetido**

```
Para k <-- 1 Até n-1                    // n voltas
{
    x <-- L[k]; Aux <-- 0              // O(1)
    Para i <-- k+1 Até n               // n-k voltas
    {
        Se ( L[i] = x )                // O(1)
        {
            Aux <-- i; Break
        }
    }
    Se ( Aux != 0 ) { Imprime ("Sim"); Retorna }  // O(1)
}
Imprime ("Não")                         // O(1)
```

Assumindo que o laço interno sempre dá **n voltas**:

$$n \times \bigl(O(1) + n \times O(1) + O(1) + O(1)\bigr) = O(n) + O(n^2) + O(n) + O(1) = O(n^2)$$

**Análise mais precisa:** o número total de voltas do laço interno é:

$$(n-1) + (n-2) + (n-3) + \ldots + 2 + 1 = \frac{n^2}{2}$$

Como `O(n²/2) = O(n²)`, o resultado se confirma.

**Conclusão:** O algoritmo executa em tempo **O(n²)**.

---

### d. Par de Elementos com Soma k

Tarefa:

> **Verificar se existem dois elementos na lista cuja soma é igual a k**

**Caso não ordenado:**

```
Para i <-- 1 Até n-1                    // n voltas
    Para j <-- i+1 Até n               // O(n) (aproximação)
    {
        Se ( L[i] + L[j] = k )         // O(1)
        {
            Imprime ("Sim"); Retorna
        }
    }
Imprime ("Não");
```

$$O(1) + n \times O(n) \times O(1) + O(1) = O(n^2)$$

---

**Caso ordenado:**

```
i <-- 1; j <-- n                        // O(1)
Enquanto ( i < j )                      // no máximo n voltas
{
    Se ( L[i] + L[j] = k )             // O(1)
    {
        Imprime("Sim"); Retorna
    }
    Se ( L[i] + L[j] < k ) i++
    Se ( L[i] + L[j] > k ) j--
}
Imprime("Não")
```

Raciocínio: as variáveis `i` e `j` são inicializadas com diferença `j - i = n - 1`. A cada volta, ou `i` é incrementado ou `j` é decrementado, reduzindo a diferença em 1. Logo, o laço termina em no máximo **n voltas**.

$$O(1) + O(n) \times O(1) + O(1) = O(n)$$

**Conclusão:**

| Caso         | Complexidade |
| ------------ | ------------ |
| Não ordenado | O(n²)        |
| Ordenado     | O(n)         |

Este é um primeiro exemplo onde o algoritmo para o **caso ordenado é significativamente mais eficiente**.

---

### e. Trabalhando com Duas Listas

Sejam L1 e L2 duas listas de tamanho n. Tarefa:

> **Contar quantos elementos de L1 são maiores que todos os elementos de L2**

**Primeira versão:**

```
cont <-- 0                              // O(1)
Para k <-- 1 Até n                      // n voltas
{
    x <-- L1[k]; Aux <-- 0             // O(1)
    Para i <-- 1 Até n                 // n voltas
    {
        Se ( L2[i] >= x )              // O(1)
        {
            Aux <-- 1; Break
        }
    }
    Se ( Aux = 0 ) cont++              // O(1)
}
Imprime ("A resposta é:", cont)         // O(1)
```

$$O(1) + n \cdot \bigl(O(1) + n \cdot O(1) + O(1) + O(1)\bigr) = O(n^2)$$

---

**Versão inteligente:**

```
// 1ª ETAPA: encontrar o maior elemento de L2
M <-- L2[1]                             // O(1)
Para i <-- 1 Até n                      // n voltas
{
    Se ( L2[i] > M ) M <-- L2[i]       // O(1)
}

// 2ª ETAPA: contar elementos de L1 maiores do que M
cont <-- 0                              // O(1)
Para k <-- 1 Até n                      // n voltas
{
    Se ( L1[k] > M ) cont++            // O(1)
}
Imprime ("A resposta é:", cont)         // O(1)
```

$$O(1) + n \cdot O(1) + O(1) + n \cdot O(1) + O(1) = O(n)$$

**Conclusão:**

| Versão             | Complexidade |
| ------------------ | ------------ |
| Primeira versão    | O(n²)        |
| Versão inteligente | O(n)         |

A versão inteligente é **realmente bem mais eficiente**.
