#include <stdio.h>


char menu();
void consultar_saldo();

int main() {
    char opcion = menu();

    do {
        switch (opcion)
        {
        case 'c':
            consultar_aldo();
            break;
        
        case 'd':
            int cantidad;
            scanf("%d", &cantidad);
            realizar_deposito(cantidad);
            break;
        }

    } while(opcion != 's');
}

char menu() {
    
}