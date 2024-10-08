#include <stdio.h>
#include <string.h>

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
} pes;

int main()
{

    printf("Digite o nome: ");
    fgets(pes.nome, 50, stdin);

    printf("digite sua idade: ");
    scanf("%i", &pes.idade);

    printf("nome: %s", pes.nome);
    printf("idade: %i",pes.idade);

    return 0;
}
