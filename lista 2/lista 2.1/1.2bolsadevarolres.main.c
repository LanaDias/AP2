#include <stdio.h>
#include <string.h>

struct dados
{
    char nome_companhia[100];
    char area_atuacao[100];
    float valor_atual_acao;
    float valor_anterior;
    double variacao_acao;
} dados;

int main()
{
    
    printf("digite o nome da companhia: ");
    scanf(" %s", dados.nome_companhia);

    printf("\ndigite sua area de atuação: ");
    scanf(" %s", dados.area_atuacao);

    printf("\ndigite o valor atual da acao: ");
    scanf("%f", &dados.valor_atual_acao);

    printf("\ndigite o valor anterio da acao: ");
    scanf("%f", &dados.valor_anterior);

    dados.variacao_acao = (dados.valor_atual_acao - dados.valor_anterior) / dados.valor_anterior * 100;

    printf("\n");
    printf("\nnome companhia: %s", dados.nome_companhia);
    printf("\nArea de atuacao: %s", dados.area_atuacao);
    printf("\nvalor atual da acao: R$ %.2f", dados.valor_atual_acao);
    printf("\nvalor anterior da acao: R$ %.2f", dados.valor_anterior);
    printf("\nvariacao %.2lf%%", dados.variacao_acao);

    return 0;
}
