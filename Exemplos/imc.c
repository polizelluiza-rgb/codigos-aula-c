#include <stdio.h>

int main() {
// declaraçao de IMC
// Entrada
float peso = 70;
float altura = 1.70;

// processamento
int imc= peso / (altura*altura);

// Saida
printf("o imc e %d" , imc);

return 0;

}
