#include <stdio.h>

int main() {
    int N;
    int a = 1, b = 1, siguiente;

    printf("Ingresa N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", a);

        siguiente = a + b;
        a = b;
        b = siguiente;
    }

    return 0;
}