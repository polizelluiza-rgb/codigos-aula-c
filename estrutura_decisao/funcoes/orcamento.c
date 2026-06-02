#include <stdio.h>
#include <locale.h>

void boasVindas() {
    printf("Seja bem-vindo!, escolha seu orcamento");
}

void calcularOrcamento(int opcao, int parcelas) {

    float placaVideo = 139.90;
    float CaixaDeSom = 99.90;
    float Kit = 149.90;
    float Monitor = 679.90;

    float total = placaVideo + CaixaDeSom + Kit + Monitor;

    int qntPessoas = 6;

    float desconto;
    float valorFinal;
    float valorParcela;
    float valorPorPessoa;

    printf("\nProdutos que foram escolhidos");
    printf("\nPlaca de video: R$ %.2f", placaVideo);
    printf("\nCaixa de som: R$ %.2f", CaixaDeSom);
    printf("\nKit mouse e teclado: R$ %.2f", Kit);
    printf("\nMonitor 21 polegadas: R$ %.2f", Monitor);

    printf("\nValor total das pecas: R$ %.2f", total);

    if (opcao == 1) {

        desconto = total * 0.15;
        valorFinal = total - desconto;
        valorPorPessoa = valorFinal / qntPessoas;

        printf("\nSe o pagamento for a vista");
        printf("\nDesconto de 15%%: R$ %.2f", desconto);
        printf("\nValor final: R$ %.2f", valorFinal);
        printf("\nValor por pessoa (6 pessoas): R$ %.2f", valorPorPessoa);
    }


    else if (opcao == 2) {

        if (parcelas >= 1 && parcelas <= 12) {

            valorFinal = total;
            valorParcela = valorFinal / parcelas;
            valorPorPessoa = valorFinal / qntPessoas;

            printf("\nSe o pagamento for parcelado");
            printf("\nValor final: R$ %.2f", valorFinal);
            printf("\n%d parcelas de R$ %.2f", parcelas, valorParcela);
            printf("\nValor por pessoa (6 pessoas): R$ %.2f", valorPorPessoa);
        }
        else {
            printf("\n A quantidade de parcelas nao foi aprovada");
        }
    }

    else {
        printf("\nSua opcao esta invalida");
    }
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int opcao;
    int parcelas = 0;

    boasVindas();

    printf("\nEscolha sua  forma de pagamento:");
    printf("\n1 - A vista (15%% desconto)");
    printf("\n2 - Parcelado em ate 12x sem juros");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao == 2) {
        printf("Digite a quantidade de parcelas que deseja pagar: ");
        scanf("%d", &parcelas);
    }

    calcularOrcamento(opcao, parcelas);

    return 0;
}