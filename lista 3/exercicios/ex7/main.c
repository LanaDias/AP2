#include <stdio.h>
#include "bibli_7fibonacc.h"

long long calcularFibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    long long a = 0;
    long long b = 1;
    long long resultado = 0;

    for (int i = 2; i <= n; ++i) {
        resultado = a + b;
        a = b;
        b = resultado;
    }

    return resultado;
}
int main()
{
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    // Calcula o enésimo termo da sequência de Fibonacci
    long long resultado = calcularFibonacci(n);

    printf("O %dº termo da sequência de Fibonacci é: %lld\n", n, resultado);

    return 0;
}
