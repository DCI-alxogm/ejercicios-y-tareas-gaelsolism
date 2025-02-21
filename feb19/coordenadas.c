/******************************************************************************

Cristian gael solis mercado.
hoy es 19 de febrero del 2025
ing. quimica susntentable

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //declaramos las variables donde vamos a almacenar los resultados y los valores.
    float r_esf, r_cil, x,y,z,theta,phi;
    
    //se puede usar un mismo scanf para varias variables
    printf("introduzca sus coordenadas x,y,z  respectivamente\n");
    scanf("%f %f %f",&x, &y, &z);
   
    //se definen las variables donde vamos a almacenar los resultados
    r_cil = sqrt((x*x)+(y*y));
     r_esf = sqrt((x*x)+(y*y)+(z*z));
    
     //esta instrucción es mas viable para arcotangente, 
     //la funcion atan no lee bien los cuadrantes
     theta = atan2(y,x);
     phi = acos((z)/(r_esf));
    
     //salida del codigo para cilindricas.
     printf("para cilindricas es:\n");
     printf("r es %f \n",r_cil);
     printf("theta es %f \n",theta);
     
     //salida del codigo para esfericas.
     printf("para esfericas \n");
      printf("r es %f \n",r_esf);
     printf("theta es %f \n",theta);
     printf("phi es %f \n",phi);
   
    return 0;
}