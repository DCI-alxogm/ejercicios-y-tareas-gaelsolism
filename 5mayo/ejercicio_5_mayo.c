#include <stdio.h>
#include<stdlib.h>

int main() {
    FILE *entrada, *salida; //tenemos un archivo de entrada y otro donde guardaremos los resultados
    int veces, i; //las veces que queremos y la de iteracion
    float inicio, fin, x, resultado; //intervalos y donde vamos a guardar el calculo
printf("ingrese el numero de puntos, el inicio y el final respectivamente\n");
    // vamos a Abrir un archivo de entrada
    entrada = fopen("entrada.txt", "r");

    // Leer los tres valores del archivo
    fscanf(entrada, "%d %f %f", &veces, &inicio, &fin);

    //este sieve como archivo de salida
    salida = fopen("parabola.txt", "w");

    // Calcular y escribir resultados, mediante un ciclo sencillo.
    for(i = 0; i < veces; i++) {
        // Calculamos x
        x = inicio + i * ((fin - inicio) / (veces - 1)); //le restamos uno por que estamos contemplando el numero de segmentos

        // Calcular x^2 + 1
        resultado = x * x + 1;

    fprintf(salida,"f(%.2f) = %.2f \n",x,resultado);
     }
     fclose(entrada);
     fclose(salida);

     printf("proceso terminado, revise su archivo de salida");
 return 0;
}
