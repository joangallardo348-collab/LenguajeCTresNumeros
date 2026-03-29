#include<stdio.h>

int main(){
    int numeroInicial,numeroFinal,valorIncremento;
    printf("Ingrese un numero Inicial: ");
    scanf("%i", &numeroInicial);
    printf("Ingrese un numero Final: ");
    scanf("%i", &numeroFinal);
    printf("Ingrese el valor de Incremento: ");
    scanf("%i", &valorIncremento);
    
    if(numeroInicial>0 && numeroFinal>0 && valorIncremento>0){
    int i=0;
        for(i=numeroInicial;i<=numeroFinal;i=i+valorIncremento){
            printf("%i ", i);
        }

    }
    else{
        printf("Los valores ingresados deben ser mayores a 0");

    }
   
    return 0;
}