#include <stdio.h>
#include <locale.h>
    int main() {

setlocale(LC_ALL, "pt_BR.UTF-8");

char nome[10] = "Luiza";
char logradouro[20] = "Rua Alberto Coral";
char bairro[12] = "Aparecidinha";
char cidade[11] = "piracicaba";
char uf[3] = "SP";


printf("---Minhas informacoes residenciais---");
printf("\nnome:%s", nome);
printf("\nLogradouro:%s", logradouro);
printf("\nBairro:%s", bairro );
printf("\nCidade:%s", cidade);
printf("\nuf:%s", uf);

        return 0;
    }