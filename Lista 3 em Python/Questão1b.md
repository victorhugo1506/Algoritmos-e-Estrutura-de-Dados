# Estrutura de Dados

## Questão 1

### Letra B — Pior Caso

No pior caso, o pivô cai sempre na **posição 1 ou n**, gerando partições completamente desequilibradas (uma de tamanho 0 e outra de tamanho n-1).

Isso gera a seguinte recorrência:

```math
T(n) = T(n-1) + O(n)
```

Resolvendo a recorrência:

```math
T(n) = O(n) + O(n-1) + ... + O(1) = O(n²)
```

Portanto, o tempo de execução no pior caso é:

```math
T(n) = O(n²)
```
