#include <stdio.h>
#include <locale.h>
int main ()
{ 
    setlocale(LC_ALL, "pt_BR.UTF-8");
  int km = 0;
  int dias = 0;
  char nome[30];
  float totalPorKM = 0;
  float totalporDia = 0;
  const float VALOR_POR_KM = 1.25;
  const float VALOR_POR_DIA = 99.50;
    
  printf("Olá, seja bem vindo,qual seu nome?");
  scanf("%s", nome);

  printf("Obrigado por escolher nossa loja, %s", nome);

  printf("\nQuantos KMs vove vai rodar com o carro?");
  scanf("%i", &km);

  printf("Para mostrar um relatorio detalhado diga quantos dias vai precisar do carro");
  scanf("%i", &dias);

  totalPorKM = km * VALOR_POR_KM;
  totalporDia = dias * VALOR_POR_DIA;

  printf("%s, segue relarorio detalhado", nome);
  printf("\ntotal por km: R$ %.2f", totalPorKM);
  printf("\ntotal por dia: R$ %.2f", totalporDia);

  if (totalporDia < totalPorKM) {
    printf("\nsugerimos usar o plano por dia");
  }else{
    printf("\nsugerimos usar o plano por km");
  }
  printf("\ntenha uma otima tarde");
    
    return 0;

}