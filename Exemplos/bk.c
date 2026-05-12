#include <stdio.h>

int main() {
   // Entrada
   float rodeio = 24.99;
   float refri = 7.99;
   float batataGrande = 14.99;
   float casquinha = 4.99;
   float cupom7 = 0.07;

  // Processamento
  float total = rodeio + refri  + batataGrande + casquinha;
  float desconto = (total * cupom7);
  float totalPagar = total - desconto;

   // Saida
printf("o total é R$ %.2f \n" , total);
printf("o descontofoi de R$ %.2f \n" , desconto );
printf("o total a ser pago é R$ %.2f" , totalPagar);
   
return 0;

}