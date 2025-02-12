/******************************************************************************

Cristian Gael solis mercado.
Ing.Química Sustentable
Hoy es Miercoles 12 de Febrero del 2025.
Segundo programa, variables.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char nombre[10];
    float temperatura;
    printf("cuál es tu nombre ¿? \n");
scanf("%s",nombre);
printf("hola %s, este es el segundo programa del curso PB 2025 \n",nombre);

    printf("Cual es tu edad ¿?\n");
    scanf("%i",&edad);
    printf("Qué temperatura marcó el termometro la ultima vez que fuiste al supermercado?\n");
    scanf("%f",&temperatura);

printf("tu nombre es %s, tienes %i años, y tu ultimo registro de temperatura fue de %f",nombre,edad,temperatura);
exit(0);
}
