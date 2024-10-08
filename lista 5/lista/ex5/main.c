#include <stdio.h>

int FIBONACCI(int n)
{
    if (n == 0) // caso base
    {
        return 0;
    }
    else if (n == 1) // caso base
    {
        return 1;
    }
    else // caso recursivo
    {
        return FIBONACCI(n - 1) + FIBONACCI(n - 2);
    }
}

int main()
{
    int n;

    printf("digite um valor para n: ");
    scanf("%i", &n);

    int m = FIBONACCI(n);

    printf("Sequência de Fibonacci: %i ", m);

    return 0;
}
