#include <stdio.h>
#include <string.h>
#include <locale.h>

struct dados
{
    char nome_companhia[20];
    char area_atuacao[20];
    float valor_atual;
    float valor_anterior;
    double variacao;
} dados;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    printf("digite o nome da companhia: ");
    scanf("%s", dados.nome_companhia);

    printf("\ndigite area de atuação: ");
    scanf("%s", dados.area_atuacao);

    printf("\nvalor atual: ");
    scanf("%f", &dados.valor_atual);

    printf("\nvalor anterior: ");
    scanf("%f", &dados.valor_anterior);

    dados.variacao = dados.valor_atual - dados.valor_anterior;

    // imprimindo
    printf("\nnome da companhia: %s", dados.nome_companhia);
    printf("\nÁrea de atuação: %s\n", dados.area_atuacao);
    printf("\nvalor atual: %.2f", dados.valor_atual);
    printf("\nvalor anterior: %.2f\n", dados.valor_anterior);
    printf("\nvariação: %.2lf", dados.variacao);
    return 0;
}
