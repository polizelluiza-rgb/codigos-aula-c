#include <stdio.h>
#include <locale.h>

void ola(){
    printf("seja bem vindo!, escolha a academia de sua preferencia");
}

void academia() {
    float VidaSaude = 12 * 39.99;
    float SaudeEmDia = 12 * 48.99;
    float FitnessPro = 12 * 58.99;

    printf("\nVida Saude: R$ %.2f por ano", VidaSaude);
    printf("\nSaude em Dia: R$ %.2f por ano", SaudeEmDia);
    printf("\nFitness Pro: R$ %.2f por ano", FitnessPro);

    if (VidaSaude < SaudeEmDia && VidaSaude < FitnessPro) {
        printf("\na acacademia mais em conta e a Vida Saúde.");
    }
    printf("\nse voce quer treinar todos os dias, a academia Fitness Pro vale mais a pena");
}




int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    ola();

   academia();
   
   return 0;
}