#ifndef BIBLI_4_H
#define BIBLI_4_H

#include <stdio.h>

int positivo(int a, int b)
{
    if (a >= 0 && b >= 0)
    {
        return a + b;
    }
    else
    {
        printf("\nnumero invalido!");
        return -1;
    }
}
#endif