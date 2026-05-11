#include <stdio.h>
#include <stdlib.h>

int main()
{
    int V[] = {9, 42, 21, 14, 28, 3, 19, 32, 46, 6};
    int maiorimpar = 0;

    for (int i = 0; i < 10; i++)
    {
        if (V[i] % 2 != 0 && V[i] > maiorimpar)
        {
            maiorimpar = V[i];
        }
    }
    printf("O maior numero impar da lista eh: %d\n", maiorimpar);
    return 0;
}