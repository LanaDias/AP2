#include <stdio.h>

int MULT(int a, int b)
{

    if (b == 1)
    {
        return a; // caso base (critério de parada)
    }
    else if (a > b)
    {
        return a + MULT(a, b - 1); // 10+10+10+10+10
                                   // 10+10=20
                                   // 10+20=30
                                   // a= 10, 20 valor q a função retona
    }

}

int main()
{
    int a, b;

    printf("digite dois valores: ");
    scanf("%i %i", &a, &b);

    MULT(a, b);

    printf("%i", MULT(a, b));

    return 0;
}