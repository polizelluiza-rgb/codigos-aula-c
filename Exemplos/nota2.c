#include <stdio.h>

int main() {

int nota = 0;

printf("qual nota voce tirou?");
scanf("%i" , &nota);

if (nota >=6.9) {
printf("voce foi aprovado");
    } else {
        printf("voce esta reprovado");
    }


    return 0;

 }