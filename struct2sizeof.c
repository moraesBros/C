#include <stdio.h>

struct Pessoa {
    char nome[50];
    int  idade;
    double peso;
};

int main() {
    printf("Tamanho de struct Pessoa: %zu bytes\n", sizeof(struct Pessoa));
    return 0;
}
