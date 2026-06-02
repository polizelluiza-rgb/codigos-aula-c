#include <stdio.h>
#include <locale.h>


void ola () {
    printf("\nSeja bem-vindo ao nosso posto de gasolina");
}

void calcularCombustivel (float precoEtanol, float precoGasolina ) {
   float proporcao = precoEtanol / precoGasolina;

   printf("\n Resultado final");
   if (proporcao < 0.70){
    printf("O Etanol esta mais em conta");
   }else{
    printf(" A Gasolina esta mais em conta");
   }
   printf("O Etanol esta custando %.2f a mais que o preco da Gasolina" , proporcao * 100);

}

int main(){
   setlocale(LC_ALL, "pt_BR.UTF-8");
   
   ola();
float Etanol = 0;
float Gasolina = 0;

printf("Qual e o preco do litro do Etanol?");
scanf("%f", &Etanol);

printf("Qual e o preco do litro da Gasolina?");
scanf("%f", &Gasolina);


   return 0;
}