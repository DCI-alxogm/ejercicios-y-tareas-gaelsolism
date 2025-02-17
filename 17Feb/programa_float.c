/******************************************************************************

Cristian Gael Solis Mercado.
Ing Quimica Sustentable.
hoy es Lunes 17 de Febrero del 2025.
OPERACIONES_float.
*******************************************************************************/
#include <stdio.h>

int main()
{
    // declaracion de variables tipo flotante:
float a,b,c,d;
float e1,e2,e3,e4;
//asiganacion de valor en la variable.
//probando con numeros negativos hasta observar su diferencia.
a=-3;
b=-4;
c=5;
d=-7;
//creacion de variable resultante
 e1=(a+b)*c/d;
 e2 = ((a+b)*c)/d;
 e3 = (a+b)*(c/d);
 e4 = a+(b*c)/d;
 
    printf("e = (a+b)*c/d) = %f \n",e1);
    printf("e = ((a+b)*c)/d = %f \n",e2);
    printf("e = (a+b)*(c/d) = %f \n",e3);
    printf("e = a+(b*c)/d = %f \n",e4);
return 0;
}
