#include <stdio.h>
#include<stdlib.h>

int main() {
    FILE *entrada, *salida; //tenemos un archivo de entrada y otro donde guardaremos los resultados
    int veces, i;
    float inicio, fin, x, resultado;

    // 1. Abrir archivo de entrada
    entrada = fopen("entrada.txt", "r");

    // Leer los tres valores del archivo
    fscanf(entrada, "%d %f %f", &veces, &inicio, &fin);

    // 2. Crear archivo de salida
    salida = fopen("parabola.txt", "w");

    // 3. Calcular y escribir resultados
    for(i = 0; i < veces; i++) {
        // Calcular valor de x
        x = inicio + i * ((fin - inicio) / (veces - 1)); //

        // Calcular x^2 + 1
        resultado = x * x + 1;
 return 0;
}
