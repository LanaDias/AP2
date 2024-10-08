#include <stdio.h>

int FATORIAL(int x)
{
    if (x == 1) // caso base 
        return 1;
    else
        return x * FATORIAL(x - 1);
}

int main()
{
    int x = 5;
    printf("com o valor de entrada: %i \t saida: %i!", x, FATORIAL(x));
    return 0;
}