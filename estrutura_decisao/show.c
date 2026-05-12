#include <stdio.h>
#include <stdbool.h>
int main()
{

    bool comprouIngressoantes = false;
    bool comprouIngressonahora = false;
    int comprou = 0;

    printf("comprou o ingresso antes? 0->nao, 1->sim:");
    scanf("%d", &comprou);

comprouIngressoantes = comprou;

 printf("comprou o ingresso na hora?0->nao, 1->sim:");
    scanf("%d", &comprou);   

    comprouIngressonahora = comprou;

    if(comprouIngressoantes  || comprouIngressonahora) {
        printf("vai assistir o show");
} else {
    printf("nao vai assistir o show");
}

return 0;
}