#include <stdio.h>
#include <string.h>

struct um
{
    char nome[30];
    int matricula;
    float N1, N2;
};
int main()
{
    struct um v[3];
    struct um a = {"maria", 8, 10, 242771}; // carga automática.

    return 0;
}
