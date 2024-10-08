#include <stdio.h>
#include <string.h>

struct FICHA
{
    char nome[30];
    float nota;
    int n_faltas;
};

int main()
{
    struct FICHA v[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        // entrada de dados
        printf("digite o primeiro nome:\n");
        scanf(" %s", v[i].nome); // na string não precisa de &
        fflush(stdin);

        printf("digite a nota: \n");
        scanf("%f", &v[i].nota);

        printf("digite o numero de faltas:\n ");
        scanf("%i", &v[i].n_faltas);
    }
    // saida de dados
    for (i = 0; i < 3; i++)
    {
        printf("\n %s %f %i", v[i].nome, v[i].nota, v[i].n_faltas);
    }

    return 0;
}
