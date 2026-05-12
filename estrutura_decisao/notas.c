#include <stdio.h>

int main() {
 

 printf("vamos calcular as notas do aluno");
   int qtdeNotas = 0;
   double nota = 0;
   double totalNotas = 0;
   double mediaFinal = 0;

   printf ("\n quantas notas deseja calcular?");
   scanf("%i", &qtdeNotas);

   for (int i=0; i<qtdeNotas; i++){
    printf("qual a nota do aluno");
    scanf("%lf", &nota);

    totalNotas = totalNotas + nota;
   }

   mediaFinal = totalNotas / qtdeNotas;

   printf("\n a media final e %.2f", mediaFinal);

   if (mediaFinal >=6) {
printf("\n voce foi aprovado");
    } else {
        printf("\n voce esta reprovado");
    }

    return 0;

}