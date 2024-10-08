#include <stdio.h>

int pot(int x, int n)
{
    // caso base
    if (n == 0)
    {
        return 1; // pq todo número elevado a 0 é 1
    }
    else
    {
        return x * pot(x, n - 1);
    }
}

int main()
{
    int x, n;

    printf("digite dois numero x e  n: ");
    scanf("%i %i", &x, &n);

    int m = pot(x, n);

    printf("resposta: %i",m);

    return 0;
}
