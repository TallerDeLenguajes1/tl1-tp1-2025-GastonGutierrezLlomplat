#include <stdio.h>

int cuadradoDeUnNumero(int a) {
    return a*a;
}

int main() {

    printf("--- CUADRADO DE UN NUMERO --\n");
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    int resultado = cuadradoDeUnNumero(numero);
    printf("El cuadrado de %d es %d", numero, resultado);







    return 0;
}