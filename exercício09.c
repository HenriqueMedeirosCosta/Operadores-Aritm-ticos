#include <stdio.h>

int main() {
  float salarioatual, percentualreajuste, novosalario, ajustepercentual;
  printf("Digite o  valor do seu salario\n");
  scanf("%f", &salarioatual);
  printf("Digite a porcentagem de reajuste\n");
  scanf(" %f", &percentualreajuste);

  novosalario = salarioatual + ((percentualreajuste / 100) * salarioatual);

  printf("Novo salrio: R$%.2f", novosalario);
}
