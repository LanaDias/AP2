#include <stdio.h>

typedef struct pessoa
{

    char nome[50];
    int idade;
} pes;

typedef struct cidade
{
    pes morador;

} cidade;

int main()
{
    pes pessoa1;
    cidade cidade1;

    printf("Digite o nome da pessoa: ");
    fgets(pessoa1.nome, 50, stdin);

    printf("digite a idade: ");
    scanf("%i", &pessoa1.idade);

    cidade1.morador = pessoa1;

    printf("Pessoa: %s", cidade1.morador.nome);
    printf("Idade: %d\n", cidade1.morador.idade);

    return 0;

    return 0;
}
