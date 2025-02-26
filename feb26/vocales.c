//cristian gael solis mercado
//hoy es 26 de febrero del 2025
//ingeniería quimica susntentable.

#include <stdio.h>

int main() {
    char c;
    int es_vocalminuscula, es_vocalmayuscula;

    // Pedir al usuario que ingrese una letra
    printf("Introduce una letra: ");
    scanf("%c", &c);  // Usamos %c para leer un solo carácter

    // Inicializar las variables para las vocales
    es_vocalminuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    es_vocalmayuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // Verificar si es una vocal
    if (es_vocalminuscula || es_vocalmayuscula) {
        printf("La letra '%c' es una vocal.\n", c);
    } else {
        printf("La letra '%c' no es una vocal.\n", c);
    }

    return 0;
}

