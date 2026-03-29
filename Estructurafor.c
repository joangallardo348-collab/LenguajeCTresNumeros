#include<stdio.h>

int main(){
    int numeroInicial,numeroFinal,valorIncremento;
    printf("Ingrese un numero Inicial: ");
    scanf("%i", &numeroInicial);
    printf("Ingrese un numero Final: ");
    scanf("%i", &numeroFinal);
    printf("Ingrese el valor de Incremento: ");
    scanf("%i", &valorIncremento);
    
    int i=0;
    for(i=numeroInicial;i<=numeroFinal;i=i+valorIncremento){
        printf("%i ", i);
    }
    return 0;
}