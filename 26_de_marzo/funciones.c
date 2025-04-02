#include <stdio.h>
#include <math.h>

int main() {
    double x, espaciado, fin;

    // Solicitar al usuario el intervalo y el espaciado
    printf("Ingrese el valor inicial de x: ");
    scanf("%lf", &x);
    printf("Ingrese el valor final del intervalo: ");
    scanf("%lf", &fin);
    printf("Ingrese el espaciado: ");
    scanf("%lf", &espaciado);

    // Imprimir encabezados de la tabla
    printf("\n x        exp(x)       log(x)      sin(x)      cos(x)      sqrt(x)\n");
    printf("---------------------------------------------------------------\n");

    // Evaluar las funciones para cada valor de x en el intervalo
    while (x <= fin) {
        double exp_x, log_x, sin_x, cos_x, sqrt_x;

        // Calcular exp(x)
        exp_x = exp(x);

        // Calcular log(x), verificar si x es mayor que 0
        if (x > 0) {
            log_x = log(x);
        } else {
            log_x = -1;  // Valor de error para log(x)
        }

        // Calcular sin(x)
        sin_x = sin(x);

        // Calcular cos(x)
        cos_x = cos(x);

        // Calcular sqrt(x), verificar si x es no negativo
        if (x >= 0) {
            sqrt_x = sqrt(x);
        } else {
            sqrt_x = -1;  // Valor de error para sqrt(x)
        }

        // Mostrar los resultados
        printf("%.2lf    %.2lf        ", x, exp_x);
        if (log_x != -1) {
            printf("%.2lf      ", log_x);
        } else {
            printf("Invalid      ");
        }
        printf("%.2lf      %.2lf      ", sin_x, cos_x);
        if (sqrt_x != -1) {
            printf("%.2lf", sqrt_x);
        } else {
            printf("Invalid");
        }
        printf("\n");

        // Incrementar x por el espaciado
        x += espaciado;
    }

    return 0;
}
