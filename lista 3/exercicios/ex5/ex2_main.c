#include <stdio.h>
#include "bibli_5.h"

int main()
{

    // entrada de dados
    printf("digite o valor x: ");
    scanf("%i", &x);

    printf("\ndigite o valor y: ");
    scanf("%i", &y);

    // printando os resultados

    printf("soma: %i", soma());
    printf("\nsubtracao: %i", sub());
    printf("\nnmultiplicacao: %i", mult());
    printf("\ndivisao: %.2f", divisao());

    return 0;
}
