#include <stdio.h>

int main() {
    int a, b, num, contador = 0, primos_por_linea = 20, primos_en_linea = 0;

    printf("Vamos a calcular los numeros primos en un intervalo [a, b] \n");
    printf("Ingrese el valor inicial de a: ");
    scanf("%d", &a);
    printf("Ingrese su valor final de b: ");
    scanf("%d", &b);

    do {
        contador = 0;
        primos_en_linea = 0;
        num = a;

        do {
            int i = 2, es_primo = 1;

            if (num < 2) es_primo = 0;
            else {
                do {
                    if (num % i == 0) {
                        es_primo = 0;
                        break;
                    }
                    i++;
                } while (i * i <= num);
            }

            if (es_primo) {
                printf("%d ", num);
                contador++;
                primos_en_linea++;

                if (primos_en_linea >= primos_por_linea) {
                    printf("\n");
                    primos_en_linea = 0;
                }

                if (contador >= 100) {
                    printf("\nSe alcanzó el límite de números primos.\n");
                    break;
                }
            }

            num++;
        } while (num <= b);

        printf("\nTotal de primos encontrados: %d\n", contador);
        printf("¿Desea probar otro intervalo? (1 = sí, 0 = no): ");
        
        int respuesta;
        scanf("%d", &respuesta);
        
        if (respuesta == 0) break;
        
        printf("Ingrese el valor inicial de a: ");
        scanf("%d", &a);
        printf("Ingrese su valor final de b: ");
        scanf("%d", &b);

    } while (1);

    return 0;
}
