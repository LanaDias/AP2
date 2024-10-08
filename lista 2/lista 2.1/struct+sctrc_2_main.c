#include <stdio.h>
#include <string.h>

typedef struct
{
    char rua[50];
    int num;
    char cep[12]; // para armazenar como string
} endereco;

typedef struct
{
    char nome[50];
    endereco dados;
    float saldo;

} pessoas;

int main()
{
    endereco end = {"rua", 12, "75000-123"};
    pessoas pes = {"lana", end, 1000.0};

    strcpy(end.rua, "rua 2");
    end.num = 13;
    strcpy(end.cep, "75000-321");

    strcpy(pes.nome, "carolina");
    pes.dados.num = 20;
    pes.saldo += 500;

    printf("nome: %s", pes.nome);
    printf("endereo : %s, %i, CEP: %s\n", end.rua, end.num, end.cep);
    printf("slado: %.2f\n", pes.saldo);

    return 0;
}
