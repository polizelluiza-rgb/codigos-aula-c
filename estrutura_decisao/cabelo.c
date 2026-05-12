#include <stdio.h>

int main()
{
    float valorPintarCabelo = 0;
    float valorCortarCabelo = 0;
    float valorHidratacao = 0;
    float valorEscova = 0;
    int opcao = 0; // 1->sim, 0->nao

    printf("voce vai pintar o cabelo? 1->sim, 0->nao ");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("qual o valor para pintar o cabelo");
        scanf("%f", &valorPintarCabelo);
    }

    printf("voce vai cortar o cabelo? 1->sim, 0->nao ");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("qual o valor para cortar o cabelo?");
        scanf("%f", &valorCortarCabelo);
    }

    printf("voce vai fazer hidratacao? 1->sim, 0->nao ");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("qual o valor para fazer a hidratacao?");
        scanf("%f", &valorHidratacao);
    }

    printf("voce vai fazer escova? 1->sim, 0->nao ");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("qual o valor para fazer a escova?");
        scanf("%f", &valorEscova);
    }

    float total = valorPintarCabelo+valorCortarCabelo+valorHidratacao+valorEscova;

    printf("\nTotal sem desconto: R$ %.2f\n", total);

    float desconto = total * 0.05;
    float total_desconto = total - desconto;

    printf("Total com 5%% de desconto (a vista): R$ %.2f\n", total_desconto);

    int parcelas;
    printf("\nEm quantas parcelas deseja pagar? ");
    scanf("%d", &parcelas);

    float valor_parcela = total / parcelas;

    printf("Pagamento parcelado em %d vezes de R$ %.2f\n", parcelas, valor_parcela);

    if (total < 400) {
    printf("o valor ficou barato R$ %.2f" , total);
} else if(total >= 400 && total <= 1000) {
   printf("o valor ficou razoavel R$ %.2f" , total); 
   } else if (total > 1000) {
   printf("o valor ficou caro R$ %.2f" , total);
}

    return 0;
}