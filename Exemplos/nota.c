#include <stdio.h>

int main() {

    // variaveis
    int atv1 = 0;
    int atv2 = 0;

    printf("qual a nota da atv 1?");
    scanf("%i", &atv1); 

    printf("qual a nota da atv2?");
    scanf("%i", &atv2);

    // processamento
    int total_atvs = atv1+atv2;

    // saida
    printf("a soma das atividades e %i", total_atvs);


 return 0;
    }