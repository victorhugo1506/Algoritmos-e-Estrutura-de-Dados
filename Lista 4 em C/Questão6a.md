# Estrutura de Dados

## Questão 6

### Letra A — Melhor Caso

No melhor caso, o pivô divide o vetor **exatamente ao meio** a cada chamada recursiva, ou seja, `k = n/2`.

Isso gera a seguinte recorrência:

```math
T(n) = 2·T(n/2) + O(n)
```

Onde isso resulta em:

```math
T(n) = O(n · log n)
```
