#include <stdio.h>
#include <stdlib.h>

int contarCaracteres(char a[], char b);

int main()
{
    char cadena[8] = {'f', 'e', 'd', 'e', 'r', 'i', 'c', 'o'};
    char letra = {'e'};
    int cantidadRepeticiones;

    cantidadRepeticiones = contarCaracteres(cadena, letra);

    printf("La letra e aparecio un total de: %d veces", cantidadRepeticiones);
    return 0;
}

int contarCaracteres(char a[], char b)
{
    int contador = 0;
    for(int i = 0; i < 8; i++)
    {
        if(b == a[i])
            {
                contador++;
            }
    }
    return contador;
}
