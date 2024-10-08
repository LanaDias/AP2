#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id; // Id do cliente
    char nome[100], email[100], endereco[100];
    int dia_nascimento, mes_nascimento, ano_nascimento, idade;
    char CPF[12]; // para ser lido como string
    float peso, imc, altura;
    char sexo[10];
} ficha_cliente;

int main()
{
    ficha_cliente x; // a)declaração da var ficha cliente

    printf("---FICHA DE CLIENTE ---");
    // b) ler os campos da ficha
    printf("\nID: ");
    scanf("%i", &x.id);

    printf("\nnome: ");
    scanf(" %[^\n]s", x.nome);

    printf("\nE-mail: ");
    scanf(" %[^\n]s", x.email);

    printf("\nData de  nascimento: ");
    scanf("%i %i %i", &x.dia_nascimento, &x.mes_nascimento, &x.ano_nascimento);

    printf("\nEndereco: ");
    scanf(" %[^\n]s", &x.endereco);

    printf("\nidade:");
    scanf("%i", &x.idade);

    printf("\nAltura: ");
    scanf("%f", &x.altura);

    printf("\nCPF: ");
    scanf(" %s", x.CPF);

    printf("\nPeso: ");
    scanf("%f", &x.peso);

    printf("\nSexo: ");
    scanf(" %s", &x.sexo);

    // calculo IMC

    x.imc = x.peso / (x.altura * x.altura);
    system("cls");
    printf("---FICHA DE CLIENTE ---");
    printf("\nID: %i", x.id);
    printf("\nnome: %s", x.nome);
    printf("\nE-mail: %s", x.email);
    printf("\nData de nascimento: %02i/%02i/%i.", x.dia_nascimento, x.mes_nascimento, x.ano_nascimento);
    printf("\nEndereço: %s", x.endereco);
    printf("\nIdade: %i", x.idade);
    printf("\nAltura: %.2f", x.altura);
    printf("\nCPF : %s", x.CPF);
    printf("\nSexo: %s", x.sexo);
    printf("\n-----------------------"); 

    return 0;
}
