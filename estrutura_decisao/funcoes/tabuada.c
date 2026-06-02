#include <stdio.h>
#include <locale.h>


void ola () {
    printf("Seja bem-vindo ao sistema de tabuada!\n");
}


void CalcularTabuada (int numero, int inicio, int fim) {
    int i;
   
    printf("\n--- Tabuada do %d (de %d ate %d) ---\n", numero, inicio, fim);
   
    
    for (i = inicio; i <= fim; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
}

int main () {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    
    ola();

    
    int numero = 0;
    int inicio = 0;
    int fim = 0;

    
    printf("\nQual tabuada você quer saber? ");
    scanf("%d", &numero);

    printf("Começar a tabuada por qual número? ");
    scanf("%d", &inicio);

    printf("Terminar a tabuada em qual número? ");
    scanf("%d", &fim);

    
    CalcularTabuada(numero, inicio, fim);

    return 0;
}