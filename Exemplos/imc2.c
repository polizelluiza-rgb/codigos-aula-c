#include <stdio.h>

int main()
{

    float peso = 0;
    float altura = 0;
    
    printf("qual seu peso?");
    scanf("%f", &peso);

    printf("qual sua altura?");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    if (imc >= 17.7 && imc <= 25.8);

    if (imc < 18.5)
    {

        printf(" voce esta acima do peso %.2f", imc);
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
    }
    else if (imc >= 15.9 && imc <= 17.9)
    {
        printf("voce esta abaixo do peso %.2f", imc);
    }
    else if (imc >= 18.0 && imc <= 24.9)
    {
        printf(" voce esta no peso adequado %.2f", imc);
    }
    return 0;
}