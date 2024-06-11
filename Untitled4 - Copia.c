#include <stdio.h>

int main() {
    printf("Bem-vindo a Maquina de Cafe Inteligente\n");
    printf("Escolha uma opçao de cafe:\n");
    printf("1. Cafe Expresso - R$3,00\n");
    printf("2. Cappuccino - R$4,00\n");
    printf("3. Latte - R$5,00\n");

    int opcao;
    printf("Digite o numero correspondente ao tipo de cafe desejado: ");
    scanf("%d", &opcao);

    char tamanho;
    printf("Escolha o tamanho do copo (P, M, G): ");
    scanf(" %c", &tamanho);

    float valor;
    if (opcao == 1)
        valor = 3.00;
    else if (opcao == 2)
        valor = 4.00;
    else if (opcao == 3)
        valor = 5.00;
    else {
        printf("Opçao invalida.\n");
        return 1;
    }

    if (tamanho == 'm')
        valor *= 2;
    else if (tamanho == 'g')
        valor *= 3;
    else if (tamanho != 'p') {
        printf("Tamanho de copo invalido.\n");
        return 1;
    }

    printf("Preparando sua bebida...\n");
    if (opcao == 1)
        printf("Cafe Expresso ");
    else if (opcao == 2)
        printf("Cappuccino ");
    else if (opcao == 3)
        printf("Latte ");
    printf("tamanho %c\n", tamanho);
    printf("O valor da sua bebida e: R$%.2f\n", valor);

    return 0;
}
