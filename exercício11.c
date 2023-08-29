#include <stdio.h>

int main() {
  float custo, porcentagemdistribuidor = 0.28, imposto = 0.45, custofinal;
  printf(" Digite o custo de fabrica do carro\n");
  scanf("%f", &custo);

  custofinal = (custo * imposto)  + ( custo * porcentagemdistribuidor) + custo;
  printf("Custo final é: %.2f", custofinal);
  
}
  
