/******************************************************************************

Cristian Gael solis mercado
Ing.Qu�mica Sustentable
Hoy es Miercoles 12 de Febrero del 2025.
Segundo programa, variables 
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    char nombre[10];
    float temperatura;
    printf("cu�l es tu nombre �? \n");
scanf("%s",nombre);
printf("hola %s, este es el segundo programa del curso PB 2025 \n",nombre);

    printf("Cu�l es tu edad �?\n");
    scanf("%i",&edad);
    printf("Qu� temperatura marc� el term�metro la ultima vez que fuiste al supermercado?\n");
    scanf("%f",&temperatura);

printf("tu edad es %i a�os \n",edad);
printf("tu ultimo registro de temperatura fu� %.f �C",temperatura);
exit(0);
}
