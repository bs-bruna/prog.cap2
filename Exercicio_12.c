#include <stdio.h>
#include <stdlib.h>

void main(){

    int idade;

    printf("Informe sua idade: \n");
    scanf("%d", &idade);

    if (idade<18)
    {
        printf("Menor de idade!");
    }
    else if (idade>=18 && idade<=65)
    {
        printf("Maior de idade!");
    }
    if (idade>65)
    {
        printf("Mais de 65 anos!");
    }
    
}