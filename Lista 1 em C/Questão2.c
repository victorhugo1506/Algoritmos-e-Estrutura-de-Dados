#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[] = {9, 42, 21, 14, 28, 3, 19, 32, 46, 6};
    int maiorimpar = 0;
    int segundomaiorimpar = 0;

    for (int i = 0; i < 10; i++)
    {
        if (V[i] % 2 != 0 && V[i] > maiorimpar)
        {
            segundomaiorimpar = maiorimpar;
            maiorimpar = V[i];
        }
        else if (V[i] % 2 != 0 && V[i] > segundomaiorimpar && V[i] < maiorimpar)
        {
            segundomaiorimpar = V[i];
        }
    }
    printf("O segundo maior numero impar da lista eh: %d\n", segundomaiorimpar);
    return 0;
}