#ifndef CALCULADORA_H_INCLUDED
#define CALCULADORA_H_INCLUDED

int soma()
{
    int a, b;

    printf("\nDigite o primeiro valor: \n");
    scanf("%i", &a);
    printf("\ndigite o segundo valor\n");
    scanf("%i", &b);

    return (a + b) * x; // esta função ira retornar a soma dos dois valores
}

int sub()
{
    int i, x;
    printf("\nDigite o primeiro valor: \n");
    scanf("%i", &i);
    printf("\ndigite o segundo valor\n");
    scanf("%i", &x);

    return (i - x) * x; // esta função ira retornar a sub dos dois valores
}

int mult()
{
    int e, f;
    printf("\nDigite o primeiro valor: \n");
    scanf("%i", &e);
    printf("\ndigite o segundo valor\n");
    scanf("%i", &f);

    return (e * f) * x;
}

float divisao()
{
    int c, d;
    printf("\nDigite o primeiro valor: \n");
    scanf("%i", &c);
    printf("\ndigite o segundo valor\n");
    scanf("%i", &d);

    return (float)(c / d) * x;
}
#endif // C_H_INCLUDED 

