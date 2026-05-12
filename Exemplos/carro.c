#include <stdio.h>

int main() { 

    // Entrada
float valorCarro = 0;
int qtdeParcelas = 0;
const float entrada30 = 0.30;

printf("qual valor do carro?");
scanf("%f" , &valorCarro);

printf("quantas parcelas deseja pagar?");
scanf("%i" , &qtdeParcelas);

    // Processamento
  float valorentrada = valorCarro * entrada30;
  float valorPagar = valorCarro - valorentrada;
  float valorParcela = valorPagar/qtdeParcelas;

    //Saida
    printf("valor carro R$ %.2f \n" , valorCarro);
    printf("valor da entrada R$ %.2f \n" , valorentrada);
    printf("valor a pagar R$ %.2f \n" , valorPagar);
    printf("%i parcelas de R$ %.2f" , qtdeParcelas, valorParcela);
    return 0;


}