#ifndef BIBLI_7_H
#define BIBLI_7_H

float CALCULA_TAXA(int horas)
{
    float taxa;

    if (horas <= 3)
    {
        taxa = 20.00;
    }
    else if (horas > 3 && horas < 24)
    {
        taxa = 20.00 + (horas - 3) * 5; // diminui as 3 horas pq elas ja são cobradas
        // Se a taxa calculada exceder o limite de R$50,00, retorna R$50,00
        if (taxa > 50)
        {
            taxa = 50.00;
        }
    }
    // Se o carro ficar exatamente 24 horas, taxa máxima de R$50,00
    else if (horas == 24)
    {
        taxa = 50.00;
    }

return taxa;
}
#endif