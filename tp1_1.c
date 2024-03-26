#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hola mundo");

    int var = 10;
    int *puntero = &var;

    printf("\n\nContenido del puntero: %d", *puntero);
    printf("\nDireccion de memoria de 'var': %p", puntero);
    printf("\nDireccion de memoria del puntero: %p", &puntero);
    printf("\nTamanio de la variable: %d", sizeof(var));

    return 0;
}