#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int qtdepessoas = 0;
    float totalfesta = 0;
    float totalpessoa = 0;
    int qntCentos = 0;

    char comes[5][30] = {"Coxinha", "Bolinho de queijo", "Esfirra", "Croquete", "Hamburguinho"};
    float valorComes[5] = {99.90, 82.99, 85.99, 78.99, 107.99};

    char bebes[5][30] = {"Coca cola", "Jaboti", "Guarana", "Suco de laranja", "Suco de uva"};
    float valorBebes[5] = {8.99, 9.99, 12.99, 8.99, 9.99};

    printf("Vamos calcular o valor!\n");

    printf("Quantas pessoas vao participar? ");
    scanf("%i", &qtdepessoas);

    int opcao = 0;
    int qtde = 0;

    printf("\nEscolha os salgados:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Vai querer %s? (1->sim, 0->nao): ", comes[i]);
        scanf("%i", &opcao);

        if (opcao == 1)
        {
            printf("Quantos centos de %s? ", comes[i]);
            scanf("%i", &qtde);
            qntCentos += qtde;
            totalfesta += qtde * valorComes[i];
        }
    }

    printf("\nEscolha as bebidas:\n");
    int qntdeLitros = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Vai querer %s? (1->sim, 0->nao): ", bebes[i]);
        scanf("%i", &opcao);

        if (opcao == 1)
        {
            printf("Quantos de %s? ", bebes[i]);
            scanf("%i", &qtde);
    
            totalfesta += qtde * valorBebes[i];
        }

        if (i == 0 || i == 2){
            qntdeLitros += qtde * 2;
        }

        if (i == 3 || i == 4){
            qntdeLitros += qtde * 1;
        }
    }

    if (qtdepessoas > 0)
    {
        totalpessoa = totalfesta / qtdepessoas;
    }

    printf("\nTotal da festa: R$ %.2f\n", totalfesta);
    printf("Total por pessoa: R$ %.2f\n", totalpessoa);

    printf("\nqnt de salgados por pessoa %i", (qntCentos * 100) / qtdepessoas);
printf("\nqntd de litros por pessoa %.3f", (float) qntdeLitros / qtdepessoas);
    return 0;
}