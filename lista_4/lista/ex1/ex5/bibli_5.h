#ifndef BIBLI_5_H
#define BIBLI_5_H

int TRIANGULO(int a, int b, int c)
{
    // para um triangulo existir a soma de quaisquer dois lados deve ser sempre maior que o terceiro lado

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("\ntringulo existe");

        // verificar tipo de trinagulo
        if (a == b && b == c)
        {
            printf("\nTriangulo EQUILATERO, possui todos os lados iguais");
        }
        else if (a == b || a == c || b == c)
        {
            printf("\nTrinangulo ISOCELES, possui apenas dois lados iguais");
        }
        else
        {
            printf("\nTrinangulo ESCALENO, possui todos os lado diferentes");
        }
    }
    else
    {
        printf("\nNão é possivel criar um triangulo pois os dados iinseridos não satisfazem a condição de desigualdade triangular");
    }
 
}
#endif