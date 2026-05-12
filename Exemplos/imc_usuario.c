#include <stdio.h>

int main() {

// variaveis

float peso = 0;
float altura = 0;

printf("qual seu peso?");
scanf("%f", &peso);

printf("qual sua altura?");
    scanf("%f", &altura);

// processamento
int imc= peso / (altura*altura);

// Saida
printf("o imc e %d" , imc);

return 0;

}
