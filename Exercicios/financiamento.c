#include <stdio.h>
#include <locale.h>
#include <string.h>
int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[20];
    const float jurosVeiculos = 0.015;
    const float jurosImoveis = 0.05;
    int meses = 0;
    int opcao = 0;
    int subOpcao = 0;
    int qntdeParcelas = 0;
    int entrada = 0;
    float valorEntrada = 0;
    float Imoveis = 0;
    float valorImoveis = 0;
    float veiculos = 0;
    float valorVeiculo = 0;
    float RendaMensal = 0;
    float valorImovel = 0;
    float renda30 = 0;
    float total$ = 0;
    float totaljuros = 0;
    float totalImoveljuros = 0;
    float totalParcelaImovel = 0;
    float total$veiculo = 0;
    float totalVeiculosjuros = 0;
    float totalJuros2 = 0;
    float valorParcelaveiculo = 0;
    float entradaImovel = 0;
    float valorParcelaImovel = 0;

    printf("Olá, seja bem vindo,qual seu nome?");
    scanf("%s", nome);

    printf("Obrigado por escolher nossa loja de financiamentos, %s", nome);

    printf("\n quantos meses vai precisar do nosso financiamento?");
    scanf("%d", &meses);

    printf("qual é o valor da sua renda mensal?");
    scanf("%f", &RendaMensal);

    printf("\nvoce deseja parcelar em quantas vezes?");
    scanf("%d", &qntdeParcelas);

    printf("\nVai querer alugar algum imovel ou algum veiculo? (1->imovel, 0 ->veiculo)");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("o que deseja financiar?(0 ->casa, 1 ->apartamento, )");
        scanf("%d", &subOpcao);
        printf("\nqual é o valor do imovel?");
        scanf("%f", &valorImovel);

        totaljuros = qntdeParcelas * jurosImoveis;
        total$ = valorImoveis * totaljuros;
        totalImoveljuros = valorImoveis + total$;
        valorParcelaImovel = totalImoveljuros / qntdeParcelas;

        printf("\no total da parcela é de R$ %.2f", valorParcelaImovel);
        renda30 = RendaMensal * 0.30;

        if (valorParcelaImovel > renda30)
            
        {

            printf("\nseu financiamento nao foi aprovado");
        }
        else
        {

            printf("\nparabens seu financiamento foi aprovado!");
        }
    }
    else
    {

        printf("o que deseja financiar?(0 ->carro, 1 ->caminhao, 2 ->moto)");
        scanf("%d", subOpcao);
        printf("\nqual é o valor do veiculo?");
        scanf("%f", &valorVeiculo);

        totalJuros2 = qntdeParcelas * jurosVeiculos;
        total$ = valorVeiculo * totalJuros2;
        totalVeiculosjuros = valorVeiculo + total$veiculo;
        valorParcelaveiculo = totalVeiculosjuros / qntdeParcelas;

        printf("\no total da parcela é de R$ %.2f", valorParcelaveiculo);
        renda30 = RendaMensal * 0.30;

        if (valorParcelaveiculo > renda30)
            
        {

            printf("\nseu financiamento nao foi aprovado");
        }
        else
        {

            printf("\nparabens seu financiamento foi aprovado!");
        }
    }

    return 0;
}