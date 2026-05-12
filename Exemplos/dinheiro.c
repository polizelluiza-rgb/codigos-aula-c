#include <stdio.h>

int main() { 
 
    // Entrada

    float salário = 0;
    int tempo = 0;
    const float guardar25 = 0.25;
    const float juros = 0.068;

    printf("quanto e seu salario?");
    scanf("%f" , &salário);

    printf("por quanto tempo vc quer guardar seu salário?");
    scanf("%i" , &tempo);

    // Processamento
    float totalJurosPercentual = tempo * juros; // total de juros
    float salário25 = salário * guardar25; // 25% do salario
    float totalDinheiro = tempo * salário25; // montante guardado
    float totalJurosValor = totalDinheiro * totalJurosPercentual; // total juros banco
    float totalComJuros = totalJurosValor * totalDinheiro; // valor total
    
    // Saida
    printf("total juros em %.2f \n" , totalJurosPercentual);
    printf("valor guardado sem juros R$ %.2f \n", totalDinheiro);
    printf("meses %i \n", tempo);
    printf("valor do juros do banco R$ %.2f \n", totalJurosValor);
    printf("valor guardado com juros R$ %.2f", totalComJuros);
  


    return 0;
    }