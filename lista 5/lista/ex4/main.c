#include <stdio.h>
#include <locale.h>

int fatorial(int n) // para calcular o fatorial
{
    if (n == 0 || n == 1) //criterio de parada
    {
        return 1;
    }
    else
    {
        return n * fatorial(n - 1); // por exemplo: n = 5, 5*fatorial(5-1) -> de primeira fica 5*4 que resulta em 20, agora o valor de n é 20, o fatorial(n-1) é o caso recursivo, ou seja, vai ficar entrando na função ate q n que vale 5 chegue em 1, com isso na segunda vez ira ficar 20 *3 = 60, na tercceira 60 *2= 120, e por fim 120 *1= 120. 
    }
}

int FATQUADRU(int n)
{
    return fatorial(2* n) / fatorial(n);
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int n;
    printf("digite o valor de n: ");
    scanf("%i", &n);

    int m = FATQUADRU(n);

    printf("O fatorial quádruplo de %i é: %i\n", n, m);

    return 0;
}
