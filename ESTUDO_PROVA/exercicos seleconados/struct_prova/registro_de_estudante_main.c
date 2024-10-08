#include <stdio.h>
#include <string.h>

struct endereco
{
    int num;
} end;

struct estudante
{
    char nome[50];
    int matricula;
    float nota;
    struct endereco dados;

} estudante;

int main()
{
    printf("digite nome do aluno: ");
    fgets(estudante.nome, 50, stdin);

    printf("digite matricula: ");
    scanf("%i", &estudante.matricula);
    printf("digite numero: ");
    scanf("%i", &estudante.dados.num);

    printf("nome: %s", estudante.nome);

    return 0;
}
