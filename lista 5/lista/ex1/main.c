#include <stdio.h>

int NATURAIS(int n)
{
    if (n == 0) // caso base
    {
        return 1;
    }
    else
    {
        return n + NATURAIS(n - 1); // nesse caso n é igual a 9 então, 9 + NATURIAIS(9-1)= 9+8=17, depois 8 + Naturais(8-1)= 8+7= 15, e assim por diante até que chegue no caso base.
    }
}

int main()
{
    int n = 9;
    printf("%i", NATURAIS(n)); // aqui a função NATURAIS copia o valor de n para si.

    return 0;
}