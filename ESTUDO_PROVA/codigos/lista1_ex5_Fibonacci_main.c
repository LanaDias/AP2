#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n, i, n1 = 0, n2 = 1, soma;

    printf("Digite o numero da posição do Fibonacci que quer saber: ");
    scanf("%i", &n);
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n > 1) // aqui começa a contrução da formula do fibonacci
    {
        // no fibonacci e calculado da seguinte  forma 0+1= 1, 1+1= 2, 1+2=3, 2+3= 5, 3+5=8, assim os fibonaccis são calculados pegando o segundo termo da soma e o resultado e somadno novamente, essa e a logica, os primerios fibonaccis segundo esses calculos do exemplo são 1 1 2 3 5 8... a formula diz que fn = f(n-1) + f (n-2), então ficara f(4)+f(3) que sesultara em 3+2= 5;

        for (i = 2; i <= n; i++)
        {
            soma = n1 + n2; // aqui soma se o valor das var, 0+1= 1, depois atualizamos abaixo o valor das variaveis para n1 receber o valor de n2 e n2 receber o valor da soma, assim conseguimos encontrar o respectivo numero fibonacci de acordo com o numero digitado pelo user,
            n1 = n2;
            n2 = soma;
        }
    }
    else
    {
        return -1;
    }
    printf("O numero Fibonacci para %i é: %i\n", n, soma);
    system("pause");
    return 0;
}
