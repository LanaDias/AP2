#include <stdio.h>

int fatorial(int n)
{
    if (n == 1) // caso base
        return 1;
    else // caso recursivo
        return n * fatorial(n - 1);
}

int main()
{
    int n = 0;

    printf("digite o valor de n: ");
    scanf("%i", &n);

    int m = fatorial(n);

    printf("resultado %i", m);

        return 0;
}
