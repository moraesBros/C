#include <stdio.h>
//diz o tamanho em byte
int main() {
    printf("int:    %zu bytes\n", sizeof(int));
    printf("float:  %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char:   %zu byte \n", sizeof(char));
    return 0;
}
