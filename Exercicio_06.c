#include <stdio.h>
#include <stdlib.h>

void main (){

    float SalarioBruto, prestacao,prestMax;

    printf("Insira o valor do salario bruto: \n");
    scanf("%f",&SalarioBruto);
    printf("Insira o valor da prestacao desejado: \n");
    scanf("%f",&prestacao);
    prestMax=SalarioBruto*0.3;

    if (prestacao>prestMax)
    {
        printf("Emprestimo nao pode ser concedido com esse valor de parcela!");
    }
    else if (prestacao<=prestMax)
    {
        printf("Emprestimo concedido!");
    }

}