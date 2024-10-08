#include <stdio.h>

int mult(int n, int x)
{
    if (x == 1)
        return n; //criterio de parada
    else
        return n +   mult(n, x - 1);//caso recursivo
}

int main()
{
    int n, x;

    printf("Digite os dois valores: ");
    scanf("%i %i", &n, &x);

    int m = mult(n, x);

    printf("%i", m);

    return 0;
}
