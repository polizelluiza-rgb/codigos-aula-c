#include <stdio.h>

int main() {
    int inicio = 0;
    int fim = 0;
    int i = 0;

    printf("Digite o numero inicial: ");
    scanf("%d", &inicio);

    printf("Digite o numero final: ");
    scanf("%d", &fim);

    printf("\nAnalise dos numeros:\n");

    
    for (i = inicio; i <= fim; i++) {
       
        
        if (i % 2 == 0) {
            printf("%d é PAR\n", i);
        }
    
        else {
            printf("%d é ÍMPAR\n", i);
        }
       
    }

    return 0;
}