#ifndef CODIGO_REVISAO_H
#define CODIGO_REVISAO_H

int somarecursiva(int n)
{

    if (n == 1)
        return 1;
    else
        return n + somarecursiva(n - 1);
}

#endif