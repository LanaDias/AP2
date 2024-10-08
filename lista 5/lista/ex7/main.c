#include <stdio.h>

int TRIBONACCI(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else if (n > 2)
    {
        return TRIBONACCI(n - 1) + TRIBONACCI(n - 2) + TRIBONACCI(n - 3);
    }
}
int main()
{
    int n;

    printf("digite um valor para n: ");
    scanf("%i", &n);

    int result = TRIBONACCI(n);

    printf("resultado: %i", result);
    return 0;
}
