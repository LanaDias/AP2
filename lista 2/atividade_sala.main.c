#include <stdio.h>
#include <string.h>

struct um
{
    char nome[30];
    int matricula;
    float N1, N2;
};

int main()
{
    struct um v[3];
    int i;
    float media = 0;

    for (i = 0; i < 3; i++)
    {
        printf("digite seu nome: ");
        scanf(" %s", v[i].nome);

        printf("\ndigite sua matricula: ");
        scanf("%i", &v[i].matricula);

        printf("\ndigite sua nota 1 e nota 2 : ");
        scanf("%f %f", &v[i].N1, &v[i].N2);

        media = media + v[i].N1 + v[i].N2;
    }

    printf("%f", media / 6);

    return 0;
}
