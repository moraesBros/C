#include <stdio.h>

struct Ponto {
    int x;
    int y;
};

int main() {
    struct Ponto p;
    printf("Tamanho da estrutura Ponto: %zu bytes\n", sizeof(p));
    return 0;
}
