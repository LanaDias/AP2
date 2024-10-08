#ifndef BIBLI_4_H
#define BIBLI_4_H

int questao_4()
{

    int num = 0;
    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num % 2 == 0)
    {
        return 0;
    }else
    {
        return 1;
    }
    
}

#endif