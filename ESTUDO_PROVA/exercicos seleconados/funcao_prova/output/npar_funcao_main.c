#include <stdio.h>

int ehpar(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n, m;

    printf("Digite um valor para n: ");
    scanf("%i", &n);

    m = ehpar(n);

    printf("%i", m);
    return 0;
}
