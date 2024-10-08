#include <stdio.h>

int x_global = 10; // Variável global

void exemploGlobal() {
    printf("Valor da variável global: %d\n", x_global);
}

int main() {

    exemploGlobal();
    return 0;
}
