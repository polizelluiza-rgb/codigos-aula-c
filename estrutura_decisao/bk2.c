#include <stdio.h>

int main()
{
float valorLancheRodeio = 0;
float valorBatataGrande = 0;
float valorRefri = 0;
float valolrSobremesa = 0;

printf("qual o valor do lanche?");
scanf("%f" ,  &valorLancheRodeio);

printf("qual o valor da batata?");
scanf("%f" , &valorBatataGrande);

printf("qual o valor do Refri?");
scanf("%f" , &valorRefri);

printf("qual o valor da sobremesa?");
scanf("%f" , &valolrSobremesa);

float total = valorLancheRodeio + valorBatataGrande + valorRefri + valolrSobremesa;

if (total < 40) {
    printf("o valor ficou barato R$ %.2f" , total);
} else if(total >= 40 && total <= 55) {
   printf("o valor ficou razoavel R$ %.2f" , total); 
   } else if (total > 55) {
   printf("o valor ficou caro R$ %.2f" , total);
}




 return 0;

}