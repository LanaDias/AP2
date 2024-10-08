#ifndef BIBLI_5_H_
#define BIBLI_5_H

int x, y; // var global

int soma()
{

    return x + y;
}
int sub()
{
    return x - y;
}

int mult()
{
    return x * y;
}

float divisao()
{
    if (y != 0)
    {
        return (float)x / y;
    }
    else
    {
        printf("invalido: divisao por zero!");
    }
}

#endif
