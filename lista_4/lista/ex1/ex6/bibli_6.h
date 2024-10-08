#ifndef BIBLI_6_H
#define BIBLI_6_H

// implementar duas sub-rotinas uma para o fatorial e uma para as combinações (sub-conjuntos)

// objetivo: calcular quantos grupos de trabalho distintos  podem ser formados a partir de um conjunto maior de pessoas.

int FATORIAL(int valor)
{
    int i, resultado = 1; // fatorial precisa ser diferente de zero

    for (i = 1; i <= valor; i++)
    {

        resultado *= i; // multiplica o serulta pelo numero atual
    }
    return resultado; // para retornar o resultado do fatorial
}

int COMBINA(int n, int p)
{ // chamar a função fatoriL para fazer os calculos da Eq.1
    // criar variaveis para receber os fatorias de n, p e n-p

    int numerador = FATORIAL(n);
    int denominador = FATORIAL(p) * FATORIAL(n - p);

    return numerador / denominador; // retorna a combinação]
}

#endif