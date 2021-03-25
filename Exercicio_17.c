#include <stdio.h>
#include <stdlib.h>

void main (){

    char nome[100];
    int idade;

    printf("Informe seu nome: \n");
    gets(nome);
    printf("Informe sua idade: \n");
    scanf("%d", &idade);

    if (idade<=10)
    {
        printf("%s deve pagar R$30,00.", nome);
    }
    else if (idade>10 && idade<=29)
    {
        printf("%s deve pagar R$60,00.", nome);
    }
    if (idade>29 && idade<=45)
    {
        printf("%s deve pagar R$120,00.", nome);
    }
    else if (idade>45 && idade<=59)
    {
        printf("%s deve pagar R$150,00.", nome);
    }
    if (idade>59 && idade<=65)
    {
        printf("%s deve pagar R$250,00.", nome);
    }
    else if (idade>65)
    {
        printf("%s deve pagar R$400,00.", nome);
    }
    
    

}