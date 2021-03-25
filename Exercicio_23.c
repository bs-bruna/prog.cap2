#include <stdio.h>
#include <stdlib.h>

void main(){

    char prato[25];
    char sobremesa[25];
    char bebida[25];
    float totalkcal, calprato, calsobre, calbebida;
    totalkcal=0;
    



    printf("Informe o prato: \n");
    gets(prato);

    if (strcmp (prato,"Vegetariano")==0)
    {
        calprato=180;
    }
    else if (strcmp (prato,"Peixe")==0)
    {
        calprato=230;
    }
    if (strcmp (prato,"Frango")==0)
    {
        calprato=250;
    }
    else if (strcmp (prato,"Carne")==0)
    {
        calprato=350;
    }

    


    printf("Informe o sobremesa: \n");
    gets(prato);

    if (strcmp (sobremesa,"Abacaxi")==0)
    {
        calsobre=75;
    }
    else if (strcmp (sobremesa,"Sorvete diet")==0)
    {
        calsobre=110;
    }
    if (strcmp (sobremesa,"Mousse diet")==0)
    {
        calsobre=170;
    }
    else if (strcmp (sobremesa,"Mousse chocolate")==0)
    {
        calsobre=200;
    }

   

    printf("Informe o bebida: \n");
    gets(prato);

    if (strcmp (bebida,"Cha")==0)
    {
        calbebida=20;
    }
    else if (strcmp (bebida,"Suco de laranja")==0)
    {
        calbebida=70;
    }
    if (strcmp (bebida,"Suco de melao")==0)
    {
        calbebida=100;
    }
    else if (strcmp (bebida,"Refrigerante diet")==0)
    {
        calbebida=65;
    }
   
    totalkcal=calprato+calbebida+calsobre;
    printf("O total de calorias e de: %f",totalkcal);
}