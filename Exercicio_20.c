#include <stdio.h>
#include <stdlib.h>

void main(){

    float saldo, credito;

    printf("Informe o saldo medio: \n");
    scanf("%f", &saldo);

    if (saldo<500)
    {
        printf("O cliente nao tem credito disponivel!");
    }
    else if (saldo>500 && saldo<=1000)
    {
        credito=saldo*0.3;
        
        printf("O cliente tem credito de %f e saldo de %f.", credito, saldo);
    }
    if (saldo>1000 && saldo<=3000)
    {
        credito=saldo*0.4;
        
        printf("O cliente tem credito de %f e saldo de %f.", credito, saldo);
    }
    else if (saldo>3000)
    {
        credito=saldo*0.5;
        
        printf("O cliente tem credito de %f e saldo de %f.", credito, saldo);
    }

}