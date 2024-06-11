#include <stdio.h>

int main() {

    int numeros[10] = {2, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    printf("O numero no indice 5 e: %d\n", numeros[5]);

    return 0;
}
