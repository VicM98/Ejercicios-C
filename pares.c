#include <stdio.h>

int main() {
    int num, num_pares = 0;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            num_pares++;
        }
    }   

    printf("\nSe imprimieron %d numeros pares.\n", num_pares);

}