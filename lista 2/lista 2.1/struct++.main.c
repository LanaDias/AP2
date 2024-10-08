#include <stdio.h>

struct DMA
{
    int dia;
    int mes;
    int ano;
};

int main()
{
    typedef struct DMA DMA; // renomeando a struct

    DMA data1, data2;

    printf("\ndigite dia: ");
    scanf("%i", &data1.dia);
    if (data1.dia < 1 || data1.dia > 30)
    {
        do
        {
            printf("invalido, digite novamente: ");
            scanf("%i", &data1.dia);
        } while (data1.dia < 1 || data1.dia > 30);
    }

    printf("Digite o mes (numero): ");
    scanf("%i", &data1.mes);
    if (data1.mes < 1 || data1.mes > 12)
    {
        do
        {
            printf("invalido, digite o mes novamente: ");
            scanf("%i", &data1.mes);
        } while (data1.mes < 1 || data1.mes > 12);
    }

    printf("Digite o ano: ");
    scanf("%i", &data1.ano);
    if (data1.ano < 0)
    {
        do
        {
            printf("invalido, digite o ano novamente: ");
            scanf("%i", &data1.ano);
        } while (data1.ano < 0);
    }

    // DATA2

    printf("\ndigite dia: ");
    scanf("%i", &data2.dia);
    if (data2.dia < 1 || data2.dia > 30)
    {
        do
        {
            printf("invalido, digite novamente: ");
            scanf("%i", &data2.dia);
        } while (data2.dia < 1 || data2.dia > 30);
    }

    printf("Digite o mes (numero): ");
    scanf("%i", &data2.mes);
    if (data2.mes < 1 || data2.mes > 12)
    {
        do
        {
            printf("invalido, digite o mes novamente: ");
            scanf("%i", &data2.mes);
        } while (data2.mes < 1 || data2.mes > 12);
    }

    printf("Digite o ano: ");
    scanf("%i", &data2.ano);
    if (data2.ano < 0)
    {
        do
        {
            printf("invalido, digite o ano novamente: ");
            scanf("%i", &data2.ano);
        } while (data2.ano < 0);
    }

    // CALCULO DA DIFERENÇA DAS DATAS

    int dias_data1 = data1.ano * 360 + data1.mes * 30 + data1.dia;

    int dias_data2 = data2.ano * 360 + data2.mes * 30 + data2.dia;

    int diferenca = dias_data1 - dias_data2;

    // caso o calculo de negativo
    if (diferenca < 0)
    {
        diferenca = -diferenca;
    }

    printf("\nA diferença entre as datas é de %d dias.\n", diferenca);

    return 0;
}
