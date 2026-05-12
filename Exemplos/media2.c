#include <stdio.h>

int main() {

float nota = 0;
int faltas = 0;
int ead = 0;
printf("qual a nota final do aluno?");
scanf("%f" , &nota);
printf("quantas faltas o aluno teve?");
scanf("%i" , &faltas);
printf("qual a porcentagem do ead foi feita?");
scanf("%i" , &ead);

if (nota >=50 && faltas <= 25 && ead == 100){
    printf("esta aprovado");
} else {
    printf("esta reprovado");
}


    return 0;
}