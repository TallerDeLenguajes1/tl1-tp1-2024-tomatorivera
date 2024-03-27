#include <stdio.h>

int cuadrado(int n);
void cuadradoP(int *n);
void mostrarDatos(int variable);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main()
{
    // Punto 4 a)
    printf("Cuadrado de 2: %d\n", cuadrado(2));

    // Punto 4 b)
    int num = 2;
    printf("\nNumero: %d", num);
    cuadradoP(&num);
    printf("\nCuadrado del numero: %d", num);

    // Punto 4 c)
    mostrarDatos(num);

    // Punto 4 d)
    int a = 10, b = 100;
    printf("\n\nValor de 'a': %d", a);
    printf("\nValor de 'b': %d", b);
    invertir(&a, &b);
    printf("\nNuevo valor de 'a': %d", a);
    printf("\nNuevo valor de 'b': %d", b);

    // Punto 4 e)
    int A = 150, B = 100;
    printf("\n\nValor de 'A': %d", A);
    printf("\nValor de 'B': %d", B);
    orden(&A, &B);
    printf("\nNuevo valor de 'A' (menor): %d", A);
    printf("\nNuevo valor de 'B' (mayor): %d", B);

    return 0;
}

int cuadrado(int n)
{
    return n * n;
}

void cuadradoP(int *n)
{
    *n *= (*n);
}

void mostrarDatos(int variable) 
{
    printf("\n\nDireccion de la variable: %p", &variable);
    printf("\nValor de la variable: %d", variable);
}

void invertir(int *a, int *b) 
{
    int aux = (*a);
    *a = (*b);
    *b = aux;
}

void orden(int *a, int *b)
{
    if ((*a) <= (*b)) return;
    else invertir(a, b);
}