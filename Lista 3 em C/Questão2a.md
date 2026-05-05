# Estrutura de Dados

## Questão 2

### Letra A — O vetor estará ordenado ao final?

**Sim**, o vetor estará completamente ordenado ao final do processo.

Para entender o porquê, podemos dividir o vetor em três partes: **V1**, **V2** e **V3**.

- **1ª ordenação** (posições 1 a 2n/3): ordena os elementos de V1 e V2 entre si, garantindo que os maiores valores de V1 ∪ V2 se movam para V2.
- **2ª ordenação** (posições n/3 a n): ordena os elementos de V2 e V3 entre si, garantindo que os **maiores valores do vetor inteiro** estejam em V3.
- **3ª ordenação** (posições 1 a 2n/3): como V2 já está ordenado em relação ao vetor todo, ao comparar novamente V1 com V2, os **menores valores** ficam em V1 e os **valores intermediários** ficam em V2.

Ao final das três passagens, V1 ≤ V2 ≤ V3, portanto o vetor está completamente ordenado.