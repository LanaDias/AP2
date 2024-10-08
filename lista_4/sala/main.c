#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
};

int main()
{
    int x, y, z;
    scanf("%i %i", &x, &y);
    z = soma(x, y);
    printf("%d", z);

    return 0;
}
