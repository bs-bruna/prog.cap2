#include <stdio.h>
#include <stdlib.h>

void main(){

    int numero;

    printf("Informe um numero: \n");
    scanf("%d", &numero);

    if (numero>20 && numero<50)
    {
        printf("O numero esta entre 20 e 50");
    }
    else if (numero<20 || numero>50)
    {
        printf("O numero nao esta entre 20 e 50");
    }
    
    
}