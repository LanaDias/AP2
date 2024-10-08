#include <stdio.h>
#include <stdlib.h>

int SOMATORIO(int n)
{
    if (n == 1) // caso base

        return 0;
    else
        return 2 * (n - 1) + SOMATORIO(n - 1); // se por exemplo n for iguas a 6 ->  2 *(6-1) =15 , 15 soma ao caso recursivo -> somatorio(n-1) -> n-1 = 6-1= 5, 5-1=4, 4-1=3, 3-1=2, 2-1=1,1-1= caso base. os resultados 5,4,3,2,1 são somados ao numero 15, resultando em 30.
}

int main()
{
    int n;

    printf("digite o valor de n: ");
    scanf("%i", &n);

    int m = SOMATORIO(n);

    printf("%i", m);
    return 0;
}
