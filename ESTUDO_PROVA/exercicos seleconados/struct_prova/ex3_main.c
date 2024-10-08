#include <stdio.h>

struct horas
{
    int hora;
    int minuto;
    int segundo;
} horas;

struct data
{
    int dia;
    int mes;
    int ano;
} data;

struct agenda
{
    char compromisso[100];
    struct data dt;
    struct horas hr;
} agenda;

int main()
{
    // horas
    printf("digite as horas, min, seg: ");
    scanf("%i %i %i", &agenda.hr.hora, &agenda.hr.minuto, &agenda.hr.segundo);

    // data
    printf("\nDigite a data: dia mes ano:");
    scanf("%i %i %i", &agenda.dt.dia, &agenda.dt.mes, &agenda.dt.ano);

    // compromisso
    printf("\ndigite compromisso: ");
    scanf("%s", agenda.compromisso);

    // exibindo na tela
    printf("\n%ihr %imin %iseg", agenda.hr.hora, agenda.hr.minuto, agenda.hr.segundo);

    printf("\nData: %02i/%02i/%02i", agenda.dt.dia, agenda.dt.mes, agenda.dt.ano);

    printf("\ncompromisso: %s", agenda.compromisso);
    return 0;
}
