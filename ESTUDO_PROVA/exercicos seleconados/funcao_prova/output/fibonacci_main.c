#include <stdio.h>

int main()
{
    int num, fibonacci = 0, a = 0, b = 1, soma;

    printf("digite um numero: ");
    scanf("%i", &num);

    if (num == 0)
    {
        return 0;
    }
    else if (num == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            soma = a + b;
            a = b;
            b = soma;
        }
        fibonacci = soma;
        printf("Fibonacci: %i\n", fibonacci);
    }

    return 0;
}
