#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int i = 2, num, f1 = 1, f0 = 0, soma;
    printf("digite o valor da posição que quer descobrir de fibonacci: ");
    scanf("%i", &num);

    if (num < 0)
    {
        printf("Número inválido! A posição deve ser não-negativa.\n");
        return -1;
    }

    if (num >= 0)
    {
        if (num == 0)
        {
            return 0;
        }
        else if (num == 1)
        {
            return 1;
        }
        while (i <= num)
        {
            soma = f0 + f1;
            f0 = f1;
            f1 = soma;
            i++;
        }
    }
    printf("%i", soma);
    return 0;
}
