#include <stdio.h>
#include <math.h>
int main() {
int numero1, numero2, soma, mult, sub;
  float div;
  int potencia;
  int modulo;

  printf("Digite dois numeros\n");
  scanf(" %d %d", &numero1, &numero2);

  soma = numero1 + numero2;
  mult= numero1 * numero2;
  sub= numero1 - numero2;
  div=(float)numero1/(float)numero2;

  printf(" Soma: %d, /multiplicaçao: %d, \nSubtraçao: %d \nDivisao: %.2f", soma, mult, sub, div);

  potencia = pow(2,7);
  printf("\n Potencia: %d", potencia);

  modulo = numero1 % numero2;
  printf("\nResto da divisao: %d", modulo);
}
