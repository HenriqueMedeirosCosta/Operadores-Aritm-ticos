#include <stdio.h>

int main() {
  float salariofixo, comissaofixa, carrovendido, vendasefetuadas;
  printf("Digite o valor do seu salário\n");
  scanf("%f", &salariofixo);
  printf( "Digite o valor da comissao\n");
  scanf("%f", &comissaofixa);
  printf("Digite o quantidade de carros vendidos\n");
  scanf("%f", &carrovendido);
  printf("Digite o valor total de vendas\n");
  scanf("%f", &vendasefetuadas);

  vendasefetuadas = (vendasefetuadas*0.5);
  salariofixo = comissaofixa + vendasefetuadas;
  printf(" O seu salario com a comissao é:^%.2f", salariofixo);
