#include <stdio.h>

int main() {
    int numeros[10];
    for(int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }

    int maior = numeros[0];
    for(int i = 1; i < 10; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    printf("O maior número do array é: %d\n", maior);

    return 0;
}

