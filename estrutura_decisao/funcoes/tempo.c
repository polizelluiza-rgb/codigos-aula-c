#include <stdio.h>
#include <locale.h>

// Função que dá as boas-vindas
void ola () {
    printf("Seja bem-vindo ao calculador de horas do curso!\n");
}

// Função que calcula o total de horas
void CalcularHorasCurso (int semestres, int horas_por_mes) {
    // Cada semestre tem 5 meses, então multiplicamos os semestres por 5
    int total_meses = semestres * 5;
   
    // Agora multiplicamos o total de meses pelas horas de aula mensais
    int total_horas = total_meses * horas_por_mes;

    printf("\n--- Resultado do Cálculo ---\n");
    printf("O seu curso tem um total de %d meses de aula.\n", total_meses);
    printf("A duração total do seu curso é de: %d horas.\n", total_horas);
}

int main () {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    
    ola();

    int qtd_semestres = 0;
    int horas_mensais = 0;

    
    printf("\nQuantos semestres tem o seu curso? ");
    scanf("%d", &qtd_semestres);

    printf("Quantas horas de aula você tem por mês? ");
    scanf("%d", &horas_mensais);


    CalcularHorasCurso(qtd_semestres, horas_mensais);

    return 0;
}
