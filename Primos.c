#include <stdio.h>

int main() {
    int numero;
    int primo = 1;

    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    if (numero < 2) {
        primo = 0;
    } else {
        for (int i = 2; i < numero; i = i + 1) {
            if (numero % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if (primo == 1) {
        printf("Es primo");
    } else {
        printf("No es primo");
    }

    return 0;
}