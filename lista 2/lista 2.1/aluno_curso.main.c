#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int matricula;
    char nome[100];
    float n1, n2, n3;
    float media;
} curso;

int main()
{
    curso v[5];
    int i;
    float maior_media, menor_media;
    int indice_maior_media = 0, indice_menor_media = 0;

    // leitura dos dados
    for (i = 0; i < 5; i++)
    {
        printf("\ndados do aluno %i:", i + 1);
        printf("\nmatricula: ");
        scanf("%i", &v[i].matricula);

        printf("\nnome: ");
        scanf(" %[^\n]s", v[i].nome);

        printf("\nnota 1: ");
        scanf("%f", &v[i].n1);

        printf("\nnota 2: ");
        scanf("%f", &v[i].n2);

        printf("\nnota 3: ");
        scanf("%f", &v[i].n3);

        // calculo media
        v[i].media = (v[i].n1 + v[i].n2 + v[i].n3) / 3.0;
        printf("media: %.2f\n", v[i].media);

        // inicializar maior e menor media na primeira iteração
        if (i == 0)
        {
            maior_media = menor_media = v[i].media;
            indice_maior_media = indice_menor_media = i;
        }

        // maior e menor média geral
        if (v[i].media > maior_media)
        {
            maior_media = v[i].media;
            indice_maior_media = i;
        }
        if (v[i].media < menor_media)
        {
            menor_media = v[i].media;
            indice_menor_media = i;
        }
    }
    system("cls");
    // exibir os dados dos alunos
    for (i = 0; i < 5; i++)
    {
        printf("\n------------------------------------");

        printf("\nAluno %i:", i + 1);
        printf("\nMatrícula: %i", v[i].matricula);
        printf("\nNome: %s", v[i].nome);
        printf("\nMédia: %.2f", v[i].media);

        // verificar se o aluno foi aprovado ou reprovado
        if (v[i].media >= 6.0)
        {
            printf("\nStatus: Aprovado");
        }
        else
        {
            printf("\nStatus: Reprovado");
        }
    }

    // exibir aluno com maior média
    printf("\n\n------------MAIOR E MENOR MEDIA----------------------");
    printf("\nAluno com a maior média:");
    printf("\nMatrícula: %i", v[indice_maior_media].matricula);
    printf("\nNome: %s", v[indice_maior_media].nome);
    printf("\nMédia: %.2f", v[indice_maior_media].media);

    // exibir aluno com menor média
    printf("\n------------------------------------");
    printf("\nAluno com a menor média:");
    printf("\nMatrícula: %i", v[indice_menor_media].matricula);
    printf("\nNome: %s", v[indice_menor_media].nome);
    printf("\nMédia: %.2f", v[indice_menor_media].media);

    return 0;
}
