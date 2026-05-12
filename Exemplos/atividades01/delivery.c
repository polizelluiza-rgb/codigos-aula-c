#include <stdio.h>

float calcularValorKM(int qtdeKmPercorridos){
    if(qtdeKmPercorridos <= 100){
        return qtdeKmPercorridos * 0.20;
    }
    if(qtdeKmPercorridos > 100 && qtdeKmPercorridos <= 200){
        return qtdeKmPercorridos * 0.45;
    }
    if(qtdeKmPercorridos > 200 && qtdeKmPercorridos <= 300){
        return qtdeKmPercorridos * 0.80;
    }
    if (qtdeKmPercorridos > 300){
        return qtdeKmPercorridos * 1.05;
    }
}

float calcularValorEntrega(int qtdeEntregas){
    if (qtdeEntregas <= 10){
        return 7.99;
    }

    if (qtdeEntregas > 10 && qtdeEntregas <= 20){
        return 16.99;
    }

    if (qtdeEntregas > 20 && qtdeEntregas <= 30){
        return 28.99;
    }

    if (qtdeEntregas > 30) {
        return 41,99;
    }
}


    int main(){
int trabalhouSegunda = 0;
int qtdeEntregasSegunda = 0;
int kmSegunda = 0;
float TotalEntegaSegunda = 0;
float TotalKmSegunda = 0;

int trabalhouTerca = 0;
int qtdeEntregasTerca = 0;
int kmTerca = 0;
float TotalEntegaTerca = 0;
float TotalKmTerca = 0;

int trabalhouQuarta = 0;
int qtdeEntregasQuarta = 0;
int kmQuarta = 0;
float TotalEntegaQuarta = 0;
float TotalKmQuarta = 0;

int trabalhouQuinta = 0;
int qtdeEntregasQuinta = 0;
int kmQuinta = 0;
float TotalEntegaQuinta = 0;
float TotalKmQuinta = 0;

int trabalhouSexta = 0;
int qtdeEntregasSexta = 0;
int kmSexta = 0;
float TotalEntegaSexta = 0;
float TotalKmSexta = 0;

int trabalhouSabado = 0;
int qtdeEntregasSabado = 0;
int kmSabado = 0;
float TotalEntegaSabado = 0;
float TotalKmSabado = 0;

int trabalhouDomingo = 0;
int qtdeEntregasDomingo = 0;
int kmDomingo = 0;
float TotalEntegaDomingo = 0;
float TotalKmDomingo = 0;

int TotalDias = 0;


printf("Sou o algoritmo que ajuda o Matias,lets go\n");

printf("trabalhou segunda? 1(sim), 2(nao)");
scanf("%i", &trabalhouSegunda);
if(trabalhouSegunda == 1)
{
    TotalDias++;
    printf("quantas entregas fez na segunda?");
    scanf("%i", &qtdeEntregasSegunda);

    printf("quantos km percorreu?");
    scanf("%i", &kmSegunda);

    TotalEntegaSegunda = calcularValorEntrega(qtdeEntregasSegunda);
    TotalKmSegunda = calcularValorKM(kmSegunda);
} 


printf("trabalhou terca? 1(sim), 2(nao)");
scanf("%i", &trabalhouTerca);
if(trabalhouTerca == 1)
{
    TotalDias++;
    printf("quantas entregas fez na Terca?");
    scanf("%i", &qtdeEntregasTerca);

    printf("quantos km percorreu?");
    scanf("%i", &kmTerca);

    TotalEntegaTerca = calcularValorEntrega(qtdeEntregasTerca);
    TotalKmTerca = calcularValorKM(kmTerca);
}


printf("trabalhou quarta? 1(sim), 2(nao)");
scanf("%i", &trabalhouQuarta);
if(trabalhouQuarta == 1)
{
    TotalDias++;
    printf("quantas entregas fez na quarta?");
    scanf("%i", &qtdeEntregasQuarta);

    printf("quantos km percorreu?");
    scanf("%i", &kmQuarta);

 TotalEntegaQuarta = calcularValorEntrega(qtdeEntregasQuarta);
TotalKmQuarta = calcularValorKM(kmQuarta);

}


printf("trabalhou quinta? 1(sim), 2(nao)");
scanf("%i", &trabalhouQuinta);
if(trabalhouQuinta == 1)
{
    TotalDias++;
    printf("quantas entregas fez na quinta?");
    scanf("%i", &qtdeEntregasQuinta);

    printf("quantos km percorreu?");
    scanf("%i", &kmQuinta);

TotalEntegaQuinta = calcularValorEntrega(qtdeEntregasQuinta);
TotalKmQuinta = calcularValorKM(kmQuinta);

}


printf("trabalhou sexta? 1(sim), 2(nao)");
scanf("%i", &trabalhouSexta);
if(trabalhouSexta == 1)
{
    TotalDias++;
    printf("quantas entregas fez na sexta?");
    scanf("%i", &qtdeEntregasSexta);

    printf("quantos km percorreu?");
    scanf("%i", &kmSexta);

 TotalEntegaSexta = calcularValorEntrega(qtdeEntregasSexta);
TotalKmSexta = calcularValorKM(kmSexta);

}


printf("trabalhou sabado? 1(sim), 2(nao)");
scanf("%i", &trabalhouSabado);
if(trabalhouSabado == 1)
{
    TotalDias++;
    printf("quantas entregas fez na sabado?");
    scanf("%i", &qtdeEntregasSabado);

    printf("quantos km percorreu?");
    scanf("%i", &kmSabado);

 TotalEntegaSabado = calcularValorEntrega(qtdeEntregasSabado);
TotalKmSabado = calcularValorKM(kmSabado);

}


printf("trabalhou domingo? 1(sim), 2(nao)");
scanf("%i", &trabalhouDomingo);
if(trabalhouDomingo == 1)
{
    TotalDias++;
    printf("quantas entregas fez na domingo?");
    scanf("%i", &qtdeEntregasDomingo);

    printf("quantos km percorreu?");
    scanf("%i", &kmDomingo);

TotalEntegaDomingo = calcularValorEntrega(qtdeEntregasDomingo);
TotalKmDomingo = calcularValorKM(kmDomingo);

}

printf("\nsegunda: %s", trabalhouSegunda == 1 ? "sim": "nao");
printf("\nquantidade de entregas:%i", qtdeEntregasSegunda);
printf("km percorrido:%i", kmSegunda);
printf("\nvalor a receber:R$ %.2f", TotalEntegaSegunda + TotalKmSegunda);

printf("\nterca: %s", trabalhouTerca == 1 ? "sim": "nao");
printf("\nquantidade de entregas:%i", qtdeEntregasTerca);
printf("km percorrido:%i", kmTerca);
printf("\nvalor a receber:R$ %.2f", TotalEntegaTerca + TotalKmTerca);


printf("\nquarta: %s", trabalhouQuarta == 1 ? "sim": "nao");
printf("\nquantidade de entregas:%i", qtdeEntregasQuarta);
printf("km percorrido:%i", kmQuarta);
printf("\nvalor a receber:R$ %.2f", TotalEntegaQuarta + TotalKmQuarta);


printf("\nquinta: %s", trabalhouQuinta == 1 ? "sim": "nao");
printf("\nquantidade de entregas:%i", qtdeEntregasQuinta);
printf("km percorrido:%i", kmQuinta);
printf("\nvalor a receber:R$ %.2f", TotalEntegaQuinta + TotalKmQuinta);


printf("\nsexta: %s", trabalhouSexta == 1 ? "sim": "nao");
printf("\nquantidade de entregas:%i", qtdeEntregasSexta);
printf("km percorrido:%i", kmSexta);
printf("\nvalor a receber:R$ %.2f", TotalEntegaSexta + TotalKmSexta);


printf("\nsabado: %s", trabalhouSabado == 1 ? "sim": "nao");
printf("\nquantidade de entregas:%i", qtdeEntregasSabado);
printf("km percorrido:%i", kmSabado);
printf("\nvalor a receber:R$ %.2f", TotalEntegaSabado + TotalKmSabado);


printf("\ndomingo: %s", trabalhouDomingo == 1 ? "sim": "nao");
printf("\nquantidade de entregas:%i", qtdeEntregasDomingo);
printf("km percorrido:%i", kmDomingo);
printf("\nvalor a receber:R$ %.2f", TotalEntegaDomingo + TotalKmDomingo);

printf("\ntotal semanal");
printf("\ntotal de dias trabalhados: %i", TotalDias);
int TotalEntregas = qtdeEntregasSegunda + qtdeEntregasTerca + qtdeEntregasQuarta + qtdeEntregasQuinta + qtdeEntregasSexta + qtdeEntregasSabado + qtdeEntregasDomingo;
printf("\ntotal das entregas %i", TotalEntregas);
int totalKM = TotalKmSegunda + TotalKmTerca + TotalKmQuarta + TotalKmQuinta + TotalKmSexta + TotalKmSabado + TotalKmDomingo;
printf("\ntotal de KMs %i", totalKM);

printf("\nmedias entregas por dia: %i", TotalEntregas / TotalDias);

float TotalGeral = TotalEntegaSegunda + TotalEntegaSegunda +
TotalEntegaTerca + TotalEntegaTerca +
TotalEntegaQuarta + TotalEntegaQuarta +
TotalEntegaQuinta + TotalEntegaQuinta +
TotalEntegaSexta + TotalEntegaSexta +
TotalEntegaSabado + TotalEntegaSabado +
TotalEntegaDomingo + TotalEntegaDomingo;

printf("\nmedia valor por dia %.2f", TotalGeral);

int media = TotalEntregas / TotalDias;
if(TotalDias == 7 && totalKM >= 200 && media >= 26){
    printf("\nbonus de R$ 178,99");
}

        return 0;
    }