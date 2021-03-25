#include <stdio.h>
#include <stdlib.h>

void main () {

int num1, num2, soma;

printf("Informe o primeiro numero\n");
scanf("%d", &num1);
printf("Informe o segundo numero\n");
scanf("%d", &num2);

soma=num1+num2;

if (soma>20)
{
    soma=soma+8;
    printf("A soma dos numeros +8 e igual a: %d",soma);
}
if (soma<=20)
{
    soma=soma-5;
    printf("A soma dos numeros -5 e igual a: %d",soma);
}



}