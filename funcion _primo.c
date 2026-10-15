#include <stdio.h>

int es_primo(int numero);

int main(){
    int n;
    scanf("%d", &n);
    int resultado = es_primo(n);
    printf("%d", resultado);
    
}


int es_primo(int numero) {
    int primo = 1;

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
        return 1;
    } else {
        return 0;
    }
}