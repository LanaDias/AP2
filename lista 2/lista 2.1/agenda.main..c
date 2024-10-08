#include <stdio.h>
#include <string.h>

struct HORAS
{
    int Hs, Min, Seg;
};

struct DATA
{
    int dia, mes, ano;
};

struct AGENDA
{
    char compromisso[100];
    struct HORAS Hr;
    struct DATA data;

} AGENDA;

int main()
{
    int opcao;
    do
    {

        printf("\n\nMENU:\n");
        printf("1 preencher a struct\n");
        printf("2 imprimir os campos da struct\n");
        printf("3 sair");
        printf("\ndigite opcao: ");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            // entrada de dados para a struct horas
            printf("\nDigite as horas: ");
            scanf("%i", &AGENDA.Hr.Hs);

            printf("\nDigite as Minutos: ");
            scanf("%i", &AGENDA.Hr.Min);

            printf("\nDigite as Segundos: ");
            scanf("%i", &AGENDA.Hr.Seg);

            // entrada de dados data
            printf("\ndigite o dia: ");
            scanf("%i", &AGENDA.data.dia);

            printf("\ndigite o nº do mes: ");
            scanf(" %i", &AGENDA.data.mes);

            printf("\ndigite o ano: ");
            scanf("%i", &AGENDA.data.ano);

            printf("\nDigite seu compromisso: ");
            scanf(" %s", AGENDA.compromisso);
            break;

        case 2:
            // impressao dos dados
            printf("\nData: %02i/%02i/%02i", AGENDA.data.dia, AGENDA.data.mes, AGENDA.data.ano);

            printf("\nhorario: %02i:%02i:%02i", AGENDA.Hr.Hs, AGENDA.Hr.Min, AGENDA.Hr.Seg); //%02i -> especificador de formato, para preencher a esquerda o zero para ficar dois digitos.

            printf("\nCompromisso: %s", AGENDA.compromisso);
            break;

        case 3:
            printf("saindo...");
            break;
        }
    } while (opcao != 3);

    return 0;
}
