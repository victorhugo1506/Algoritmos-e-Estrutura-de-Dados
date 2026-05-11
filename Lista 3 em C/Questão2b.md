# Estrutura de Dados

## Questão 2

### Letra B — Análise de Complexidade

Cada uma das três passagens aplica o BubbleSort sobre **2n/3 elementos**. Como o BubbleSort tem complexidade O(m²) para uma entrada de tamanho m, temos:

| Passagem               | Elementos | Complexidade       |
| ---------------------- | --------- | ------------------ |
| 1ª (posições 1 a 2n/3) | 2n/3      | O((2n/3)²) = O(n²) |
| 2ª (posições n/3 a n)  | 2n/3      | O((2n/3)²) = O(n²) |
| 3ª (posições 1 a 2n/3) | 2n/3      | O((2n/3)²) = O(n²) |

> **Nota:** O((2n/3)²) = O(4n²/9) = O(n²), pois constantes são ignoradas na notação O.

Somando as três passagens:

```math
O(n²) + O(n²) + O(n²) = O(n²)
```

Portanto, o tempo total de execução deste procedimento é **O(n²)**.
