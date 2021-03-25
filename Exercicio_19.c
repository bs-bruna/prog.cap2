#include <stdio.h>
#include <stdlib.h>

void main(){

    int pontos1, pontos2, pontos3, soma, media;

    printf("Pontos do primeiro jogador: \n");
    scanf("%d", &pontos1);
    printf("Pontos do segunda jogador: \n");
    scanf("%d", &pontos2);
    printf("Pontos do terceiro jogador: \n");
    scanf("%d", &pontos3);

    soma=pontos1+pontos2+pontos3;
    media=soma/3;

    if (soma>=100)
    {
        printf("Aprovado com media %d.", media);
    }
    else if (soma<100)
    {
        printf("Equipe Desclassificada");
    }
    
    

}