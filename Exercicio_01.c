#include <stdio.h>
#include <stdlib.h>

void main()
{
int num1, num2, soma;

printf("Informe o primeiro numero\n");
scanf("%d", &num1);
printf("Informe o segundo numero\n");
scanf("%d", &num2);

soma=num1+num2;
if (soma>10)
{
    printf("A soma dos valores e: %d",soma);
}

}