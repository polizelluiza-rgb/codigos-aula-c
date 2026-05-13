#include <stdio.h>
#include <locale.h>
#include <string.h>
int main ()
{ 
    setlocale(LC_ALL, "pt_BR.UTF-8");
  int km = 0;
  int dias = 0;
  char nome[30];
  char carro [30];
  float totalPorKM = 0;
  float totalporDia = 0;
  const float VALOR_POR_KM = 1.25;
  const float VALOR_POR_DIA = 99.50;
  const char cupoms[3][30] = {
    "LP_10", "LP_20", "LP_30"
  };
  char cupomCliente[30];
  int temCupom = 0;
  float valorDesconto = 0;

    
  printf("Olá, seja bem vindo,qual seu nome?");
  scanf("%s", nome);

  printf("Obrigado por escolher nossa loja, %s", nome);

  printf("\n%s, qual carro voce deseja alugar?", nome);
  scanf("%s", carro);

  printf("\nQuantos KMs com o %s voce vai rodar com o carro?");
  scanf("%i", &km);

  printf("Para mostrar um relatorio detalhado diga quantos dias vai precisar do carro");
  scanf("%i", &dias);

  printf("%s, tem cupom de desconto? 1->sim, 0->nao", nome);
  scanf("%i", &temCupom);

  if (temCupom == 1) {
    printf("digite o codigo: ");
    scanf("%s", cupomCliente);

    for (int i=0; i < 3; i++) {
        if (strcmp(cupomCliente, "LP_10") == 0){
            valorDesconto = 10;

        }
        if (strcmp(cupomCliente,"LP_20") == 0){
            valorDesconto == 20;
        }
        if (strcmp(cupomCliente, "LP_30") == 0){
            valorDesconto == 30;
        }
    }
  }

  totalPorKM = (km * VALOR_POR_KM) - valorDesconto;
  totalporDia = (dias * VALOR_POR_DIA) - valorDesconto;

  printf("%s, segue relarorio detalhado", nome);
  printf("\ntotal por km: R$ %.2f", totalPorKM);
  printf("\ntotal por dia: R$ %.2f", totalporDia);

  if (temCupom == 1) {
    printf("\nvoce teve desconto de R$ %.2f", valorDesconto);
  }

  if (totalporDia < totalPorKM) {
    printf("\nsugerimos usar o plano por dia");
  }else{
    printf("\nsugerimos usar o plano por km");
  }
  printf("\ntenha uma otima tarde");
  printf("\ndesenvolvido por Luiza Polizel");
    
    return 0;

}