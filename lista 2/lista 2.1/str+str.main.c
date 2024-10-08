#include <stdio.h>
#include <string.h>

// Definição da estrutura "endereco"
typedef struct
{
    char rua[50];
    int num;
    char cep[12]; // para armazenar como string
} endereco;

// Definição da estrutura "pes"
typedef struct
{
    char nome[50];
    endereco dados;
    float saldo;
} pes;

int main()
{
    // Inicialização das variáveis
    endereco end = {"Rua 1", 12, "75000-123"};
    pes p = {"Lana", end, 1000.0};

    // Atualização da struct "endereco"
    strcpy(end.rua, "Rua 2");
    end.num = 13;
    strcpy(end.cep, "75001-321");

    // Atualização da struct "pes"
    strcpy(p.nome, "Carolina");
    p.dados.num = 20;
    p.saldo += 500; // adicionando 500 ao saldo

    // Exibindo os valores atualizados
    printf("Nome: %s\n", p.nome);
    printf("Endereço: %s, %i, CEP: %s\n", end.rua, end.num, end.cep);
    printf("Saldo: %.2f\n", p.saldo);

    return 0;
}
