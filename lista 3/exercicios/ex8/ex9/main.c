#include <stdio.h>

typedef struct
{
    int matricula;
    float notas[3];

} Aluno;

Aluno Turma[5];     // Variável global
int alunoAtual = 0; // Variável global para controlar o aluno atual

void LeAluno()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%i", &Turma[i].matricula);

        for (int j = 0; j < 3; j++)
        {
            printf("Digite a nota %i do aluno: ", j + 1);
            scanf("%f", &Turma[i].notas[j]);
        }
    }
}

void ImprimeTurma()
{
    for (int i = 0; i < 5; i++)
    {
        printf("Aluno %d - Matricula: %i\n", i + 1, Turma[i].matricula);
        for (int j = 0; j < 3; j++)
        {
            printf("Nota %i: %.2f\n", j + 1, Turma[i].notas[j]);
        }
    }
}

float CalculaMediaAluno()
{
    float soma = 0.0;

    // Calcula a média do aluno atual
    for (int j = 0; j < 3; j++)
    {
        soma += Turma[alunoAtual].notas[j];
    }

    alunoAtual++; // Passa para o próximo aluno da turma
    return soma / 3.0;
}

int main()
{
    float media;
    int i;

    for (i = 0; i < 5; i++)
    {
        LeAluno(); // Função que lê os dados de cada aluno
    }

    ImprimeTurma(); // Função que imprime os dados de todos os alunos

    for (i = 0; i < 5; i++)
    {
        media = CalculaMediaAluno();                       // Função que calcula a média das notas de um aluno
        printf("Aluno %d - Media = %.2f\n", i + 1, media); // Corrigido para exibir o número do aluno e sua média
    }

    return 0;
}
