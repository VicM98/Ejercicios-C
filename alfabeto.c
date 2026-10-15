#include <stdio.h>

int main() {
    char letra = 'Z';

    while (letra >= 'A') {
        printf("%c ", letra);
        letra--;
    }

    printf("\n\nCaso con for\n");

    letra = 'Z';
    for (int contador = 26; contador > 0; contador--) {
        printf ("%c ", letra);
        letra --;
    }

}