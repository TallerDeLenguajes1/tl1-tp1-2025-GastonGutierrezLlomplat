#include <stdio.h>

int main() {

    printf("Hola Mundo\n");
    printf("Clase de Taller 1\n\n");

    int numero = 25;
    int *p_numero = &numero;

    printf("Contenido del puntero: ");
    printf("%d\n", *p_numero);

    printf("Direccion de memoria almacenada por el puntero: ");
    printf("%d\n", p_numero);

    printf("Direccion de memoria de numero: ");
    printf("%d\n", &numero);

    printf("Direccion de memoria del puntero: ");
    printf("%d\n", &p_numero);

    printf("Cantidad de memoria utilizada por la variable: ");
    printf("%d", sizeof(numero));

    return 0;
} 