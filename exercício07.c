#include <stdio.h>

int main() {
  float raio, área, mult, soma, div, potencia;

  printf("Digite o valor do raio\n");
  scanf("%f", &raio);

  área = pow(raio,2) * 3.14;
  printf("A área do circulo é: %.2f", área);
  
}
 
