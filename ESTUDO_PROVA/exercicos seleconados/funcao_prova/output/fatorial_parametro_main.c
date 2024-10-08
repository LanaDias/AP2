#include <stdio.h>

int fatorial(int n)
{
    int i = 1, fat = 1;

    for (i = 1; i <= n; i++)
    {
        fat = fat * i;
    }
    return fat;
}

int main()
{
    int n, m;
    printf("digite o valor que você quer saber o fatorial: ");
    scanf("%i", &n);

    m = fatorial(n);

    printf("resultado: %i ", m);
    return 0;
}
