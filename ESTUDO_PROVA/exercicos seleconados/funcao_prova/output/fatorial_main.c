#include <stdio.h>

int fatorial()
{
    int num = 5, i = 1;
    int fat = 1;

    for (i = 1; i <= num; i++)
    {
        fat = fat * i;
    }
    return fat;
}

int main()
{
    int resultado = fatorial();

    printf("resultado : %i", resultado);

    return 0;
}
