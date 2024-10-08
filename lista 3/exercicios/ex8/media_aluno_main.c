#include <stdio.h>
#include "calculo_media.h"

int main()
{
    // entada das notas
    printf("Digite nota 1: ");
    scanf("%f", &num1);

    printf("Digite nota 2: ");
    scanf("%f", &num2);

    printf("Digite nota 3: ");
    scanf("%f", &num3);

    // escolha do tipo de media e impressao da media escolhida
    char tipo_media;
    printf("digite 'p' para media ponderada / 'a' para media aritmetica: ");
    scanf(" %c", &tipo_media);

    if (tipo_media == 'p')
    {
        printf("media ponderada: %f", media_ponderada());
    }
    else if (tipo_media == 'a')
    {
        printf("media aritmetica: %f", media_aritmetica());
    }
    else
    {
        printf("invalido");
    }
    return 0;
}
