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
    float r_esf, r_cil, x,y,z,theta.phi;
    printf("introduzca sus coordenadas x,y,z  respectivamente\n")
    scanf("%f %f %f",%x,%y,%z);
    r_cil = sqrt((x*x)+(y*y));
     r_esf = sqrt((x*x)+(y*y)+(z*z));
     theta = atan(y/x);
     phi = ((z)/sqrt((x*x)+(y*y)+(z*z));
     
     printf("para cilindricas es\n");
     printf("r es %f \n",r_cil);
     printf("theta es %f \n",theta);
     
     printf("para esfericas \n");
      printf("r es %f \n",r_esf);
     printf("theta es %f \n",theta);
     printf("theta es %f \n",theta);
   
    return 0;
}