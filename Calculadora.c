#include <stdio.h>

int main() {
    int a, b, opcion;
    int resultado = 0;

    printf("Ingresa el primer numero: ");
    scanf("%d", &a);

    printf("Ingresa el segundo numero: ");
    scanf("%d", &b);

    printf("\n1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);

    switch (opcion) {

        case 1:
            resultado = a + b;
            printf("Resultado: %d", resultado);
            break;

        case 2:
            int contador = 0;

            while (contador + b != a) {
                contador = contador + 1;
            }

            resultado = contador;
            printf("Resultado: %d", resultado);
            break;

        case 3:
            resultado = 0;

            for (int i = 0; i < b; i++) {
                resultado = resultado + a;
            }

            printf("Resultado: %d", resultado);
            break;

        case 4:
            resultado = 0;
            int suma = 0;

            while (suma + b <= a) {
                suma = suma + b;
                resultado = resultado + 1;
            }

            printf("Resultado: %d", resultado);
            break;

        default:
            printf("Opcion no valida");
    }
}