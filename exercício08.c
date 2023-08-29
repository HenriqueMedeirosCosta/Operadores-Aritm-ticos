#include <stdio.h>

int main() {
  float  meses,ano,dias, am, md, amd;
  printf("Digite sua idade expresa em anos, meses e dias\n");
  scanf("%f %f %f",&ano,&meses, &dias );
  am = ano * 365;
  md = meses * 30;
  amd = am + md + dias;
  printf("Sua idade em dias é: %.2f", amd);
    
  
