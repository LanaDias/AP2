#include <stdio.h>
#include <stdlib.h>
#include "./ex2/bibli_2.h"
#include "./ex3/bibli_3.h"
#include "./ex4/bibli_4.h"
#include "./ex5/bibli_5.h"
#include "./ex6/bibli_6.h"
#include "./ex7/bibli_7.h"

int main()
{
    int op;
    do
    {

        printf("\nMENU:\n");
        printf("2) Positivos e negativos\n");
        printf("3) conversao\n");
        printf("4) Dois positivos\n");
        printf("5  Triangulo\n");
        printf("6) Conjuntos possiveis\n");
        printf("7) Cálculo de Taxas de Estacionamento\n");
        printf("8) sair\n");

        printf("\nEscolha uma opção: ");
        scanf("%i", &op);
        int resp, valor;

        switch (op)
        {
        case 2:

            printf("digite um valor ");
            scanf("%i", &valor);

            resp = positivo_negativo(valor);

            if (resp)
            {
                printf("positivo");
            }
            else
            {
                printf("negativo");
            }

            break;

        case 3:

            printf("Digite um valor ");
            scanf("%i", &valor);

            tres(valor);

            break;

        case 4:
        {
            int a, b;

            // Entradas de dados na main
            printf("\nDigite dois números: ");
            scanf("%i %i", &a, &b);

            // Passa os números para a função, e ela faz o cálculo e retorna o resultado
            int soma = positivo(a, b);

            if (soma != -1) // Verifica se a soma é válida
            {
                printf("\nA soma de %i e %i é: %i\n", a, b, soma);
            }
        }
        break;

        case 5:
        {
            int lado1, lado2, lado3;

            printf("\ndigite o lado 1 do triangulo: ");
            scanf("%i", &lado1);
            printf("\ndigite o lado 1 do triangulo: ");
            scanf("%i", &lado2);
            printf("\ndigite o lado 1 do triangulo: ");
            scanf("%i", &lado3);

            TRIANGULO(lado1, lado2, lado3); // a,b,c
        }
        break;

        case 6:
        {
            int n = 10, p = 4; // n-> total de integrantes, p-> integrantes por grupo

            int combinacao = COMBINA(n, p);
            printf("O número de combinações possíveis é: %d\n", combinacao); // Mostra o resultado
        }
        break;

        case 7:
        {

            float tabela[3][2]; // para imprimir como tabela, 3 clientes, 2 colunas (coluna 0 = horas, coluna 1 = taxas)
            float total_horas = 0, total_taxa = 0;
            int i;

            // entrada de dados
            for (i = 0; i < 3; i++)
            {
                int horas;
                printf("Horas de estacionamento do cliente %i: ", i + 1);
                scanf("%i", &horas); // Aqui não é necessário usar horas[i], apenas horas

                tabela[i][0] = horas;                // Coluna 0 = horas
                tabela[i][1] = CALCULA_TAXA(horas); // Coluna 1 = taxa calculada

                // Somando total de horas e taxas
                total_horas += horas;
                total_taxa += tabela[i][1];
            }

            // Imprimindo a tabela
            printf("\nCarro\tHoras\tTaxas\n");
            for (i = 0; i < 3; i++)
            {
                printf("%d\t%.0f\t%.2f\n", i + 1, tabela[i][0], tabela[i][1]);
            }

            // Imprimindo totais
            printf("\nTotal\t%.0f\t%.2f\n", total_horas, total_taxa);
        }
        break;

        default:
            break;
        }
    } while (op != 8);

    return 0;
}