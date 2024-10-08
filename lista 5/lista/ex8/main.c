#include <stdio.h>

int NUMPELL(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n > 2)
    {
        return 2 * NUMPELL(n - 1) + NUMPELL(n - 2);
    }
}
int main()
{
    int n, m;

    printf("digite um valor para n: ");
    scanf("%i", &n);

    m = NUMPELL(n);

    printf("%i", m);

    return 0;
}
