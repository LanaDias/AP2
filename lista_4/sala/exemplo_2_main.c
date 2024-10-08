#include <stdio.h>

int f(int x)
{
    return x + 90;
}

int main()
{
    int y;
    printf("Digite um valor!\n");
    scanf("%i", &y);
    printf("Entrada: %i\nSaida: %i", y, f(y)); // chama a função f e o X copia o valor de y e retorna o calculo 
    return 0;

    return 0;
}
