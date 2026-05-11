# 📖 Aula 01 — Algoritmos Fundamentais

> Revisao dos conceitos basicos de manipulacao de vetores

---

## 1. Buscar Elemento (Inspecao de Lista)

**Objetivo:** Encontrar se um valor `k` existe no vetor `V`.

```pseudo
i = 1
enquanto (i <= N)
   Se (v[i] == k)
      imprime("Achei")
      Para
   i++
```

### 📝 Como funciona

| Passo | Descricao                            |
| ----- | ------------------------------------ |
| 1     | Comeca no indice 1                   |
| 2     | Percorre o vetor ate posicao `N`     |
| 3     | Compara cada elemento com `k`        |
| 4     | Se encontrar → imprime "Achei" e sai |
| 5     | Se nao encontrar → continua          |

### 💡 Ideia Central

> Percorrer elemento por elemento ate encontrar o valor desejado.

---

## 2. Contagem de Ocorrencias

**Objetivo:** Contar quantas vezes um valor `k` aparece no vetor `V`.

```pseudo
i = 1
cont = 0

Enquanto (i <= N)
   Se (V[i] == K)
      Cont++
   i++

Imprime(Cont)
```

### 📝 Como funciona

| Passo | Descricao                                    |
| ----- | -------------------------------------------- |
| 1     | Inicializa contador em 0                     |
| 2     | Percorre todo o vetor                        |
| 3     | Cada vez que `V[i] == K` → incrementa `cont` |
| 4     | No final, exibe o total de ocorrencias       |

### 💡 Ideia Central

> Varredura completa contando todas as aparicoes do elemento.

---

## 3. Encontrar o Maior (Varredura Linear)

**Objetivo:** Identificar o maior elemento do vetor `V`.

```pseudo
M = V[1]
i = 2

Enquanto (i <= N)
   Se (V[i] > M)
      M = V[i]
   i++
```

### 📝 Como funciona

| Passo | Descricao                                        |
| ----- | ------------------------------------------------ |
| 1     | Assume que o primeiro elemento e o maior         |
| 2     | Comeca a verificar do segundo elemento em diante |
| 3     | Se encontrar um maior → atualiza `M`             |
| 4     | Repete ate o final                               |

### 💡 Ideia Central

> "Assume o primeiro como maior, e prove o contrario se encontrar alguém maior."

---

## 📊 Resumo Visual

```
┌─────────────────────────────────────────────────────────┐
│  BUSCA        →  Encontra elemento? (sim/nao)           │
│  CONTAGEM     →  Quantas vezes aparece?                 │
│  MAIOR        →  Qual o maior valor?                    │
└─────────────────────────────────────────────────────────┘
```

---

## 🔑 Pontos-Chave

| Algoritmo | Complexidade | Uso Principal        |
| --------- | :----------: | -------------------- |
| Busca     |     O(n)     | Verificar existencia |
| Contagem  |     O(n)     | Frequency analysis   |
| Maior     |     O(n)     | Estatisticas basicas |

> Todos seguem o padrao de **varredura linear** — percorrem o vetor uma vez.

---
