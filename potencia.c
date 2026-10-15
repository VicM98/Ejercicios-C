#include <stdio.h>

int main() {
    int numero, potencia, A = 1;

    printf("Ingresa el numero: ");
    scanf("%d", &numero);

    printf("Ingresa la potencia: ");
    scanf("%d", &potencia);

    for (int i = 0; i < potencia; i++) {
        A = A * numero;
    }

    printf("El resultado es: %d\n", A);

}