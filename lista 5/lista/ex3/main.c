#include <stdio.h>

int POT(int x, int n)
{
    if (n == 0)//caso base
    {
        return 1; // retorna 1 pois x^0 = 1
    }
    else
    {
        return x * POT(x, n - 1); 
    }
}
int main()
{
    int x, n;

    printf("Digite um valor para x e n: ");
    scanf("%i %i", &x, &n);

    POT(x, n);

    printf("%i", POT(x, n));

    return 0;
}