#include <stdio.h>
#include <string.h>

struct data
{
    int dia, ano;
    char mes[10];
};

struct pessoa
{
    char nome[30];
    int matricula;
    float N1, N2;
    struct data nascimento;
} b;
int main()
{
    printf("\ndigite o nome: ");
    scanf(" %s", b.nome);

    printf("\ndigite as notas:");
    scanf("%f", &b.N1, &b.N2);

    printf("\ndigite a matricula: ");
    scanf("%i", &b.matricula);

    printf("digite o dia, mês e ano");
    scanf("%i", &b.nascimento.dia);
    scanf("%s", b.nascimento.mes);
    scanf("%i", &b.nascimento.ano);

    printf("%s %f %f %i %i %s %i", b.nome, b.N1, b.N2, b.matricula, b.nascimento.dia, b.nascimento.mes, b.nascimento.ano);

    return 0;
}
