#include <stdio.h>
#include <stdlib.h>

void main(){
    
    char tipo[10];
    char nome[50];

    printf("Informe o nome do livro: \n");
    gets(nome);
    printf("Informe o tipo de usuario: \n");
    scanf("%s", &tipo);
    
    
    if (strcmp (tipo,"aluno")==0)
    {
        printf("Nome do livro: %s \nTipo de usuario: %s \nTotal de dias: 3", nome, tipo);
    }
    else if (strcmp (tipo,"professor")==0)
    {
        printf("Nome do livro: %s\nTipo de usuario: %s \nTotal de dias: 10", nome, tipo);
    }
    return 0;

}
