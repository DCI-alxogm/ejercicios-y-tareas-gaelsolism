#include <stdio.h>
#include <math.h>
// no se ocupa #include <string.h>

int main() {
    int opcion, numero;
    double decimal; //utilizamos mejor double por que sqrt() devuelve tipo double
    char letra1, letra2, letra3;
    int contador = 0;
    int resultado;
   
    printf("Seleccione una opción:\n");
    printf("1. Calcular el cuadrado de un número\n");
    printf("2. Verificar si un número es par o impar\n");
    printf("3. Calcular la raíz cuadrada de un número decimal\n");
    printf("4. Contar cuántas vocales hay en tres letras ingresadas\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1: //1.- agregue \n
            printf("Ingrese un número:\n  ");
            scanf("%d", &numero);
            //eliminamos pow(numero, 2.0) por :
            resultado = numero * numero;
            //cambiamos %f por %d
            printf("El cuadrado de %d es %d\n", numero, resultado);
            break;
        case 2: //otro espacio
            printf("Ingrese un número:\n ");
            scanf("%d", &numero);
            if (numero % 2 == 0) {
                printf("El número es par.\n");
            } else {
                printf("El número es impar.\n");
            }
            break;
        case 3: //otro espacio
            printf("Ingrese un número decimal: \n ");
            scanf("%lf", &decimal); //para leer la entrada de un double se usa %lf en vez de %f
            if (decimal >= 0) {
           // decimal = sqrt(decimal);
                printf("La raíz cuadrada es: %.2f\n", sqrt(decimal));
            } else {
                printf("No se puede calcular la raíz cuadrada de un número negativo.\n");
            }
            break;
        case 4: //agregamos mas saltos de linea \n
            printf("Ingrese tres letras separadas por espacios:\n ");
            scanf(" %c %c %c", &letra1, &letra2, &letra3);
            if (letra1 == 'a' || letra1 == 'e' || letra1 == 'i' || letra1 == 'o' || letra1 == 'u' ||
                letra1 == 'A' || letra1 == 'E' || letra1 == 'I' || letra1 == 'O' || letra1 == 'U') {
                contador += 1; // el uso de el operador += simplifica mejor el codigo
            }
            if (letra2 == 'a' || letra2 == 'e' || letra2 == 'i' || letra2 == 'o' || letra2 == 'u' ||
                letra2 == 'A' || letra2 == 'E' || letra2 == 'I' || letra2 == 'O' || letra2 == 'U') {
                contador += 1; // el uso de el operador += simplifica mejor el codigo
            }
            if (letra3 == 'a' || letra3 == 'e' || letra3 == 'i' || letra3 == 'o' || letra3 == 'u' ||
                letra3 == 'A' || letra3 == 'E' || letra3 == 'I' || letra3 == 'O' || letra3 == 'U') {
                contador += 1; // el uso de el operador += simplifica mejor el codigo
            }
            printf("Se ingresaron %d vocales.\n", contador);
            break;
        default:
            printf("Opción no válida\n");
            //agrego un break
            break;
    }
    return 0;
}
