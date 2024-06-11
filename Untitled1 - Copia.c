#include <stdio.h>
int main() {
  int num1, num2, soma, div, mult, sub;
  char operacao;

  printf("Digite um numero:  ");
  scanf(" %d", &num1);

  printf("Digite outro numero:  ");
  scanf(" %d", &num2);

  printf("Digite a operacao desejada (+, -, *, /):  ");
  scanf(" %c", &operacao);
  switch (operacao) {
    case '+':
      soma = num1 + num2 ;
      printf("Soma = %d", soma);
      break;
    case '-':
        sub = num1 - num2;
      printf("Subtracao = %d", sub);
      break;
    case '*':
        mult = num1 * num2;
      printf("Multiplicacao = %d", mult);
      break;
    case '/':
        div = num1 / num2;
      printf("Divisao = %d", div);
      break;
    default:
      printf("Operacao invalida!\n");
  }
  return 0;
}
