#include <stdio.h>
#include <stdlib.h>

void main (){

    int dataNasc, dataAtual, idade;

    printf("Informe o ano do seu nascimento:\n");
    scanf("%d",&dataNasc);
    printf("Informe o ano atual:\n");
    scanf("%d",&dataAtual);

    idade=dataAtual-dataNasc;

    if (idade>0)
    {
        printf("A sua idade e %d anos", idade);
    }
    else if (idade<=0)
    {
        printf("Idade e 0 ou menor!");
    }
    
    
    

}