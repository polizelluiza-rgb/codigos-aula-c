#include <stdio.h>
#include <locale.h>
    int main() {

setlocale(LC_ALL, "pt_BR.UTF-8");

char escola[6];
char ano[20];
char escolaTecnica[6];
char curso[20];

printf("\nqual e o nome da sua escola?");
scanf(" %[^\n]", escola);

printf("\nem qual ano voce esta?");
scanf(" %[^\n]", ano);

printf("\nqual e o nome da sua escola tecnica?");
scanf(" %[^\n]", escolaTecnica);

printf("\nqual curso voce esta fazendo?");
acanf(" %[^\n]", curso);


printf("\n--suas informacoes academicas sao--");
printf("Escola:%s", escola);
printf("\nAno escolar:%s", ano);
printf("\nEscola tecnica:%s", escolaTecnica);
printf("\nCurso:%s", curso);

        return 0;
    }