#include <stdio.h>
#include <stdlib.h>
float aplicarDescuento (float precio);

int main()
{
    float a;
    float resultado;
    printf("Ingrese el precio: ");
    scanf("%f", &a);
    resultado = aplicarDescuento(a);

    printf("El resultado es: %.1f", resultado);
    return 0;
}

float aplicarDescuento (float precio)
{
    float precioFinal;
    precioFinal = precio - (precio*0.05);

    return precioFinal;
}
