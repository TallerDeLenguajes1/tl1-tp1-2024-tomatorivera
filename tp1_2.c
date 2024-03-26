#include <stdio.h>

int cuadrado(int n);
void cuadradoP(int *n);

int main()
{
    printf("Cuadrado de 2: %d", cuadrado(2));

    int *num = 2;
    cuadradoP(*num);
    printf("Num: %d", *num);

    return 0;
}

int cuadrado(int n)
{
    return n * n;
}

void cuadradoP(int *n)
{
    *n *= *n;
}