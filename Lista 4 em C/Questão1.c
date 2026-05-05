#include <stdio.h>

int main() {
    int V[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = 10;
    int x, y;

    //ovo imprimir o vetor primeiro
    for (int i = 0; i < 10; i++) {
        printf("%d ", V[i]);
    }

    printf("\n");

    printf("Digite o valor a ser substituido (x): ");
    scanf("%d", &x);
    printf("Digite o novo valor (y): ");
    scanf("%d", &y);

    int inicio = 0;
    int fim = n - 1;
    int encontrou = 0;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (V[meio] == x) {
            V[meio] = y;
            encontrou = 1;
            break;
        }

        if (V[meio] < x) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    if (encontrou) {
        printf("Elemento %d substituido por %d com sucesso.\n", x, y);
    } else {
        printf("Elemento %d nao encontrado no vetor.\n", x);
    }

    printf("Vetor resultante: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", V[i]);
    }
    printf("\n");

    printf("E o tempo de execucao eh O(log n).\n");
    return 0;
}