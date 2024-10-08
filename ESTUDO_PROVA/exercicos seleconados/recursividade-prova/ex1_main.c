#include <stdio.h>

int soma(int n)
{

    if (n == 0) /// caso base
        return 0;
    else
        return n + soma(n - 1);
}

int main()
{
    int n = 9;
    int m = soma(n);

    printf("soma: %i", m);

    return 0;
}
