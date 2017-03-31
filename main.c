#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 10

int main()
{


int i;
char continuar="s";
float numeros[CANTIDAD];
for(i=0;i<CANTIDAD;i++){
    printf("ingrese un numero: ");
    scanf("%f",&numeros[i]);
    fflush(stdin);
    printf("desea continuar: ");
    scanf("%c",&continuar);
    if(continuar!='s'){
        break;

    }
} // fin for

// aca ya esta cargado ekl vector conlos numeros
int menor=numeros[0];
for(i=0;i<CANTIDAD;i++)
{
    printf("%d %f\n",i,numeros[i]);
    if(numeros[i]<menor)
    {
        //printf("%d",menor);
        menor = numeros[i];
    }
}
printf("menor: %d",menor);





}


