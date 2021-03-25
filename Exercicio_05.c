#include <stdio.h>
#include <stdlib.h>

void main(){

    int numero;

    printf("Informe um numero\n");
    scanf("%d", &numero);

    if (numero%3==0 && numero%7==0){
        printf("%d e divisivel por 3 e 7 ",numero);
    }
    else if (numero%3!=0 || numero%7!=0)
    {
        printf("%d nao e deivisivel por 3 ou por 7",numero);
    }

}