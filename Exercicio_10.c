#include <stdio.h>
#include <stdlib.h>

void main(){

    int n1, n2, n3;

    printf("Informe o primeiro numero:\n");
    scanf("%d",&n1);
    printf("Informe o segundo numero:\n");
    scanf("%d",&n2);
    printf("Informe o terceiro numero:\n");
    scanf("%d",&n3);

    if (n1 <= n2 && n2 <= n3)
    {
      printf("A ordem crescente: %d %d %d\n", n3, n2, n1);
    }
  else if (n1 <= n3 && n3 <= n2)
    {
      printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
    }
  else if (n2 <= n1 && n1 <= n3)
    {
      printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
    }
  else if (n2 <= n3 && n3 <= n1) 
    {
      printf("A ordem crescente: %d %d %d\n", n1, n3, n2);
    }
  else if (n3 <= n1 && n1 <= n2) 
    {
      printf("A ordem crescente: %d %d %d\n", n3, n1, n2);
    }
  else 
    {
      printf("A ordem crescente: %d %d %d\n", n1, n2, n3);
    }

    

}