#include <stdio.h>
#include <stdlib.h>

void main() {

    float industria;    

    printf("Digite o indece de poluicao:");
    scanf("%f",&industria);

    if (industria>=0.05 && industria<=0.25)
    {
        printf("Indice dentro dos padroes aceitaveis.");
    }
    else if (industria>0.25  && industria<0.4 )
    {
        printf("Paralizar atividades do primeiro grupo!");
    }
    if (industria>=0.4 && industria<0.5)
    {
        printf("Paralizar atividades do primeiro e segundo grupos!");
    }
    else if (industria>=0.5)
    {
        printf("Paralizar atividades de todos os grupos!");
    }
    
    
    

}