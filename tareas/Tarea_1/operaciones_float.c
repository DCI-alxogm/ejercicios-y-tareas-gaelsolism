/******************************************************************************

Cristian Gael Solis Mercado.
Ing Quimica Sustentable.
hoy es Lunes 17 de Febrero del 2025.
OPERACIONES_float
*******************************************************************************/
#include <stdio.h>

int main()
{
    // declaracion de variables tipo flotante:
float a,b,c,d;
float e1,e2,e3,e4;
printf("introduce el valor de a \n");
scanf("%f",&a); 


printf("introduce el valor de b  \n");
scanf("%f",&b);

printf("introduce el valor de c \n");
scanf("%f",&c);

printf("introduce el valor de d \n");
scanf("%f",&d);
 e1=(a+b)*c/d;
 e2 = ((a+b)*c)/d;
 e3 = (a+b)*(c/d);
 e4 = a+(b*c)/d;
 
    printf("e = (a+b)*c/d) = %f \n",e1);
    printf("e = ((a+b)*c)/d = %f \n",e2);
    printf("e = (a+b)*(c/d) = %f \n",e3);
    printf("e = a+(b*c)/d = %f \n",e4);
return 0;
}