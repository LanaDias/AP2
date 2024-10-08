#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dados
{
    char nome[100];  // campo 1
    int matricula;   // campo 2
    char curso[100]; // campo 3
};

int main()
{
    struct dados v[5]; // vetor de 5 estruturas
    int i = 0; // para percorrer o vetor

    for (i = 0; i < 5; i++)
    {
        // entrada de dados
        printf("_______________________________________");
        printf("\nnome aluno %i: ", i + 1);
        scanf(" %[^\n]s", v[i].nome);

        printf("\nmatricula aluno %i: ", i + 1);
        scanf("%i", &v[i].matricula);

        printf("\ndigite o curso: ");
        scanf(" %[^\n]s", v[i].curso);
    }
    system("cls");

    for (i = 0; i < 5; i++)
    {
        // saida de dados
        printf("_______________________________________");
        printf("\ndados do aluno %i:\n", i + 1);
        printf("nome: %s\n", v[i].nome);
        printf("matricula: %i\n", v[i].matricula);
        printf("Curso: %s\n", v[i].curso);
    }

    return 0;
}
