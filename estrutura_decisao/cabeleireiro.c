#include <stdio.h>

int main()
{

float valorCorte = 0;
float valorLuzes = 0;
float valorEscova = 0;

printf("qual o valor do Corte?");
scanf("%f" ,  &valorCorte);

printf("qual o valor das Luzes?");
scanf("%f" , &valorLuzes);

printf("qual o valor da escova?");
scanf("%f" , &valorEscova);


float total = valorCorte+valorLuzes+valorEscova;

if (total < 200) {
    printf("o valor ficou barato R$ %.2f" , total);
} else if(total >= 200 && total <= 400) {
   printf("o valor ficou razoavel R$ %.2f" , total); 
   } else if (total > 400) {
   printf("o valor ficou caro R$ %.2f" , total);
}



return 0;



}