#include <stdio.h>
#include <stdlib.h>

void main(){

    float percurso, consumo;
    char tipo[1];

    printf("Informe o tipo do carro (A, B ou C): \n");
    gets(tipo);
    printf("Informe o percurso em KM: \n");
    scanf("%f", &percurso);
    

    if (strcmp (tipo,"A")==0)
    {
        consumo=percurso/12;
        printf("O consumo em litros de combustivel foi de: %f",consumo);
    }
    else if (strcmp (tipo,"B")==0)
    {
        consumo=percurso/9;
        printf("O consumo em litros de combustivel foi de: %f",consumo);
    }
    if (strcmp (tipo,"C")==0)
    {
        consumo=percurso/8;
        printf("O consumo em litros de combustivel foi de: %f",consumo);
    }
    

}
