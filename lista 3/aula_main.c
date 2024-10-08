int x =1; // var global
#include <stdio.h>
#include "calculadora_main.h"

// modularização/sub.progrma
// modulo/função
int gloabal; // sempre esta funcioanando, pronta pra recber ou enviar valores, "nunca desliga"

float MEDIA() // criando a função media
{
    int nota, quant, i, soma = 0;
    float m;

    printf("\ndigite a quantidade: ");
    scanf("%i", &quant);
    for (i = 0; i < quant; i++)
    {

        printf("\nnota: ");
        scanf("%i", &nota);
        soma = soma + nota; // somo +=nota;
    }
    m = (float)soma / quant;

    return m;
}

int main() // void e uma função que n retorna. Compilador procura a função main. int main, sempre retorna um valor inteiro.
{
    int id;

    printf("digite sua identidade: ");
    scanf("%i", &id);

    printf("%f", MEDIA()); // chama a função MEDIA
    getchar();             // imprime a função MEDIA



    int resp = soma();

    printf("resposta funcao soma: %i", resp);

    return 0;
}
