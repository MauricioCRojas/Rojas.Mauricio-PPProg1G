#include <stdio.h>
#include <stdlib.h>
#define TAM 10


float aplicarDescuento (float valor);
int contarCaracteres (char cadena[], char caracter, int tam);



int main()
{
    float valor;
    char cadena[TAM]="Portero";

    printf("Ingrese valor: ");
    scanf("%f", &valor);
    printf("%.2f\n", aplicarDescuento(valor));

    printf("%d",contarCaracteres (cadena, 'o', TAM));


    return 0;
}


float aplicarDescuento (float valor){
float precioConDescuento;
precioConDescuento= valor - (valor * 5 /100);
return precioConDescuento;

}



int contarCaracteres (char cadena[], char caracter, int tam){
    int contador=0;
    for(int i=0; i < tam; i++){
        if (cadena[i]==caracter){
            contador++;
        }

    }
    return contador;
}
