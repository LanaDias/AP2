#include <stdio.h>
#include <stdlib.h>

int SOMA(int a, int b)
{
    return a + b;
}

int SUB(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{
    return a / b;
}

int main()
{
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%i", &x);

    printf("digite o valor de y: ");
    scanf("%i", &y);

    printf("%i + %i = %i\n", x, y, SOMA(x, y));
    printf("%i - %i = %i\n", x, y, SUB(x, y));
    printf("%i * %i = %i\n", x, y, mult(x, y));
    printf("%i / %i= %2.f\n", x, y, divi(x, y));

    return 0;
}
