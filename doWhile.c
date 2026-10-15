#include <stdio.h>

int main() {

    int opcion;

    do {
        printf("\n1. Ver perfil");
        printf("\n2. Configuracion");
        printf("\n3. Salir");
        printf("\nOpcion: ");
        scanf("%d", &opcion);

    } while (opcion != 3);

    printf("\n\n");


////////////////////////////////////////////////


    int password;

    do {
        printf("Ingresa tu contrasena: ");
        scanf("%d", &password);
    } while (password != 1234);

    printf("\n\n");


///////////////////////////////////////////////

    int edad;

    do {
        printf("Ingresa tu edad: ");
        scanf("%d", &edad);
    } while (edad < 1 || edad > 100);

    printf("\n\n");

//////////////////////////////////////////////////

    char respuesta;

    do {
        printf("Jugando partida...\n");

        printf("¿Quieres jugar otra vez? (s/n): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 's');

    printf("\n\n");


//////////////////////////////////////////////////

    //Cajero automático

}