#ifndef BIBLI_3_H_INCLUDED
#define BIBLI_3_H_INCLUDED

int tres(int valor)
{

    int cal_min, cal_hr, cal_seg;
    // spara saber quantas horas cabem dentro do valor digitado pelo user
    cal_hr = valor / 3600;
    valor = valor % 3600; // resto da divisãp para ir para os minutos

    // para saber quantos minutos cabem no restante do valor que sobrou das horar que cabiam dentro do valor digitado, e o que sobrou da divisã do resto das horas por
    cal_min = valor / 60;
    cal_seg = valor % 60; // resto da divisao por 60 q ira para os segundos

    // Exibindo
    printf("%d horas\n", cal_hr);
    printf("%d minutos\n", cal_min);
    printf("%d segundos\n", cal_seg);

}

#endif