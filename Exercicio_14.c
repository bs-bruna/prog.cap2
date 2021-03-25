#include <stdio.h>
#include <stdlib.h>

void main (){

    float salario;

    printf("Informe o salario: \n");
    scanf("%f", &salario);

    if (salario<=600)
    {
        printf("Voce esta insento de de taxa!");
    }
    else if (salario>600 && salario<=1200)
    {
        salario=salario*0.8;
        printf("O salario com o desconto do INSS e %f", salario);
    }
    if (salario>1200 && salario<=2000)
    {
        salario=salario*0.75;
        printf("O salario com o desconto do INSS e %f", salario);
    }
    else if (salario>2000)
    {
        salario=salario*0.7;
        printf("O salario com o desconto do INSS e %f", salario);
    }

}