#include <stdio.h>

int main() {
    int vetor[10];
    printf("Tamanho total do vetor: %zu bytes\n", sizeof(vetor));
    printf("Tamanho de um elemento do vetor: %zu bytes\n", sizeof(vetor[0]));
    printf("Quantidade de elementos: %zu\n", sizeof(vetor) / sizeof(vetor[0]));
    return 0;
}
