#include <stdio.h>

    int main() {
const float valorPorLitro = 0.05;
const int qtdeLitrosMulta = 400;
const int qtdeLitrosDesconto = 250;
const float valorMulta = 150;
const float valorDesconto = 50;
const int periodo30 = 30;
const int faixaEconomica = 250;;
const int faixaExcessiva = 400;

int qtdePessoas = 0;
float valorTotalConta = 0;
int qtdeLitrosConsumida = 0;
int idade = 0;

printf("Ola,vamos calcular sua conta de agua\n");
printf("para começar,quantas pessoas moram na residencia?");
scanf("%i", &qtdePessoas);

for (int i=0; i<qtdePessoas;i++){
    printf("agora qual idade da pessoa %i:", i);
    scanf ("%i", &idade);

    if (idade <=10){
    qtdeLitrosConsumida += 18;
    }else if (idade > 10 && idade <= 18) {
    qtdeLitrosConsumida += 30;
     } else if (idade > 18 && idade <= 25){
    qtdeLitrosConsumida += 42;
     }else if (idade > 25){
    qtdeLitrosConsumida += 24;
     }

}

valorTotalConta = valorPorLitro * qtdeLitrosConsumida * periodo30;

if (qtdeLitrosConsumida >= faixaExcessiva){
printf("faixa de consumo:Excessiva\n");
printf("total de pessoas na residencia:%i\n", qtdePessoas);
printf("quantidade consumo em litros:%i\n", qtdeLitrosConsumida);
printf("valor da conta mensal: %.2f\n", valorTotalConta);
printf("multa aplicada:R$ %.2f\n", valorMulta);

}else if(qtdeLitrosConsumida <= faixaEconomica){
printf("faixa de consumo:Economica\n");
printf("total de pessoas na residencia:%i\n", qtdePessoas);
printf("quantidade consumo em litros:%i\n", qtdeLitrosConsumida);
printf("valor da conta mensal: %.2f\n", valorTotalConta);
printf("desconto na proxima conta:R$ %.2f\n", valorDesconto);

}else{
printf("faixa de cosumo:normal\n");
printf("total de pessoas na residencia:%i\n", qtdePessoas);
printf("quantidade consumo em litros:%i\n", qtdeLitrosConsumida);
printf("valor da conta mensal: %.2f\n", valorTotalConta);


}



        return 0;
    
    }