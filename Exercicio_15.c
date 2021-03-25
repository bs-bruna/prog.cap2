#include <stdio.h>
#include <stdlib.h>

void main (){

    float produto, lucro;

    printf("O valor de compra do produto foi: \n");
    scanf("%f", &produto);

    if (produto<20)
    {
        lucro=produto*0.45;
        produto=produto+lucro;
        printf("O valor de venda desse produto e de: %f", produto);
    }
    else if (produto>20)
    {
        lucro=produto*0.3;
        produto=produto+lucro;
        printf("O valor de venda desse produto e de: %f", produto);
    }
    


}