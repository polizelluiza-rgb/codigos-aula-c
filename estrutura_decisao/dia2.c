#include <stdio.h>

int main() {

  int dia = 0;
  printf("qual dia da semana? 0->dom, 7->sab"),
  scanf ("%i" , &dia);

  switch (dia) {
    case 1:
    printf("domingou");
    break;

    case 2:
    printf("segundona");
    break;

    case 3:
    printf("terca");
    break;

    case 4:
    printf("meio da semana");
    break;

    case 5:
    printf("quinta");
    break;

    case 6:
    printf("ultimo dia de escola");
    break;

    case 7:
    printf("final de semana");
    break;
}
 return 0;

}