#include <stdio.h>
#include <stdlib.h>

int main(){ 
    int V[]= {9, 2, 7, 7, 2, 2, 1, 7, 7, 9};
    int imparparaencontrar = 0;
    int contador = 0;

    printf("Digite um numero impar para ser procurado na lista e ver se ele se repete: ");
    scanf("%d", &imparparaencontrar);

    for(int i =0; i < 10; i++){
        if(V[i] == imparparaencontrar){
            contador++;
        }
        else if(V[i] != imparparaencontrar && V[i] % 2 != 0){
            printf("O numero %d nao esta presente na lista.\n", imparparaencontrar);
            return 0;
        }
    }
    printf("O numero %d aparece %d vezes na lista.\n", imparparaencontrar, contador);
    return 0;
}