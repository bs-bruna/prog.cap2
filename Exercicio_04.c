#include <stdio.h>
#include <stdlib.h>

void main (){
    int numero;

    printf("Informe um numero\n");
    scanf("%d", &numero);

    if (numero%5==0){
        printf("%d e divisivel de 5",numero);
    }
    else if (numero%5!=0)
    {
        printf("%d nao e deivisivel de 5",numero);
    }
}