#include <stdio.h>
#include <stdlib.h>

void main (){

    char Nome[100];
    float nota1, nota2, media;

    printf("Informe o nome do aluno: \n");
    scanf("%s", &Nome);
    printf("Informe a nota da prova 1: \n");
    scanf("%f", &nota1);
    printf("Informe a nota da prova 2: \n");
    scanf("%f", &nota2);

    media=(nota1+nota2)/2;

    if (media>=6)
    {
        printf("O aluno %s, foi aprovado com as notas %f e %f, e media de %f", Nome, nota1, nota2, media);
    }
    else if (media<6)
    {
        printf("O aluno %s, foi reprovado com as notas %f e %f, e media de %f", Nome, nota1, nota2, media);
    }

}