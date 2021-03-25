#include <stdio.h>
#include <stdlib.h>

void main (){

    int numero;

    printf("Informe um numero\n");
    scanf("%d", &numero);

    if (numero%3==0){
        printf("%d e multiplo de 3",numero);
    }
    else if (numero%3!=0)
    {
        printf("%d nao e multiplo de 3",numero);
    }
    
    

}