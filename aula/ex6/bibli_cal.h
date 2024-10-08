#ifndef BIBLI_CAL_H
#define BIBLI_CAL_H

#include <stdio.h>

int hora;

int saudacao()
{
    if (hora > 6.1 && hora < 12.0)
    {
        printf("\nBom dia");
    }
    else if (hora > 12.1 && hora < 18)
    {
        printf("\nBoa tarde");  
    }
    else if ((hora > 18 && hora < 23) || (hora >= 0 && hora <= 5))
    {
        printf("\nBoa noite");
    }
    else
    {
        printf("\n valor invalido");
    }
}

#endif