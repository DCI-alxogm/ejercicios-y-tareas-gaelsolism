#include <stdio.h>

int main()
{
    float temp_C, temp_K;
    float inicial = 100, final = 200, delta;
    int n = 10;
    int op = 1;

    delta = (final - inicial) / n;

    while (op == 1) {
        temp_C = inicial;

        printf("Tabla de conversion de grados C a K:\n");
        while (temp_C <= final) {
            temp_K = temp_C + 273.15;
            printf("%.2f C || %.2f K\n", temp_C, temp_K);
            temp_C += delta;
        }

        // Preguntar al usuario si desea repetir la operación
        printf("Deseas hacer otra operacion? Presiona 1 para si, 2 para no:\n");
        scanf("%i", &op);
    }

    return 0;
}
