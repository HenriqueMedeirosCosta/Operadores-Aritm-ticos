#include <stdio.h>
#include <math.h>

int main(){

float mercadoria, frete, de, vv, mult, vb, porcentagemLucro, lucroLiquido; 

  printf("Custo da mercadoria:\n");
  scanf(" %f", &mercadoria);
  printf("\nvalor do frete:");
  scanf("%f", &frete);
  printf("\nvalor de despesas eventuais:");
  scanf("%f", &de);

  
  vb = mercadoria + frete + de; 

  printf("\nvalor de venda:");
  scanf("%f", &vv);

  lucroLiquido = vv - vb;
  porcentagemLucro = (lucroLiquido/vb) *100;
  printf("Lucro liquido: %.2f", porcentagemLucro);
}
  
