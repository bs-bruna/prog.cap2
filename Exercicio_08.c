#include <stdio.h>
#include <stdlib.h>

void main(){

    int numero;

    printf("Informe um numero: \n");
    scanf("%d", &numero);
    if (numero>20)
    {
        printf("Maior que 20");
    }
        if (numero==20)
    {
        printf("Igual a 20");
    }
        if (numero<20)
    {
        printf("Menor que 20");
    }

}