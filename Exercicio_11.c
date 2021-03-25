#include <stdio.h>
#include <stdlib.h>

void main(){
    int X, Y, Z, maior;

    printf("Informe o primeiro numero:\n");
    scanf("%d",&X);
    printf("Informe o segundo numero:\n");
    scanf("%d",&Y);
    printf("Informe o terceiro numero:\n");
    scanf("%d",&Z);

     if(X > Y){
    	maior = X;
    }else{
        maior = Y;
    }
    if(Z > maior){
        maior = Z;   
    }

    printf("O maior valor e %d", maior);

}