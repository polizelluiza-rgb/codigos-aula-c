#include <stdio.h>

int main() {

int dia = 0; 

printf("qual dia da semana? (dom->0, sab->6)");
scanf("%i", &dia);

if (dia == 0) {
    printf("domingo, ultimo dia pra aproveitar");
} else if (dia == 1) {
    printf("segunda,bora pra escola");
} else if (dia == 2) {
    printf("terca,falta muito ainda");
} else if (dia == 3) {
    printf("quarta,meio da semana");
} else if (dia == 4) {
    printf("quinta,ta quase acabando");
} else if ( dia == 5) {
    printf("sexta,ate que enfim o ultimo dia");
} else if(dia == 6) {
    printf("sabado,dia de descanso");
} else {
    printf("dia nao encontrado");
}

    return 0;
}
