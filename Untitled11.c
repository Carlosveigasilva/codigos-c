#include <stdio.h>

int main() {
    float temperatura[] = {27.5, 28, 29.7, 31.7, 25.3, 19, 16.3};
    int tamanho = 7;

    float soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += temperatura[i];
    }

    float media = soma / tamanho;

    printf("A media da semana e: %.2f\n", media);

    return 0;
}
