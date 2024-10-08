#include <stdio.h>

struct pessoa
{
    char nome[10];
    int numero;
} pes;

struct info
{
    struct pessoa dados;
    int cep;
} d;

int main()
{

    printf("digite nome: ");
    fgets(d.dados.nome, 10, stdin);


    return 0;
}
