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
    struct FICHA mat;

    printf("digite o primeiro nome:\n");
    scanf(" %s",mat.nome);
    fflush(stdin);

    printf("digite a nota: \n");
    scanf("%f", &mat.nota);

    printf("digite o numero de faltas:\n ");
    scanf("%i", &mat.n_faltas);

    printf("\n %s %f %i", mat.nome, mat.nota, mat.n_faltas);
    return 0;
}
