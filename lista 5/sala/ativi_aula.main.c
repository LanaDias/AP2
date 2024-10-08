#include <stdio.h>

int FUNCAO(int x)
{
    if (x == 1) //caso base 
        return 1;
    else
        return (10 * FUNCAO(x - 1) + 2);
}

int main()
{
    int x = 5;
    printf("%i", FUNCAO(x));
    return;
}