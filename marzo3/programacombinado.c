//cristian Gael Solis Mercado
//ingenieria quimica sustentable
//hoy es 3 de marzo del 2025;
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
//para coordenadas
float x,y,z;
//para esfericas
float  r_esf,theta, phi;
//parta cilindricas 
float r_cil; 
//para temperatura
float tk,tc;
//opciones
char opcion[15];
char repetir[5];


// esta instruccion se ejecutara unicamente si el usuario desea repetir el algoritmo
        repetir_algoritmo:


//definir que hacer primero
    printf("seleccione que es lo que desea hacer usted \n");
    printf("¿coordenadas o conversion de temperatura?\n");
    scanf("%s",opcion);
if(strcmp(opcion,"coordenadas")==0)
    //inicio de programa de coordenadas
{
    
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
   
   //fin del codigo para coordenadas
}

    //inicio de codigo para conversion de temperatura;
else if(strcmp(opcion,"temperatura")==0)
{
    printf("\ningrese su temperatura en Celsius\n");
    scanf("%f",&tc);
    tk = tc + 273.150;
    printf("su temperatura en Kelvin es de %f \n ",tk);
}

// fin de la conversion de temperatura

else
{
    printf("opcion no valida\n");
    goto repetir_algoritmo;
    
}
//el usuario decide si volver a intentar o no


/*en este goto vamos a devolver la pregunta en caso de que no sea si o no*/
repetir_pregunta:
//separacion del goto

    printf("quieres intentarlo de nuevo¿?\n");
    printf("elija si o no\n");
    scanf("%s",repetir);
    
if(strcmp(repetir,"si")==0)
{
    goto repetir_algoritmo;  
}
else if(strcmp(repetir,"no")==0)
{
printf("que tenga un excelente día");    
}
else
{
  printf("preferiria una respuesta concreta, ¿si o no?\n");
  goto repetir_pregunta;
}
return 0;
}    
    
    
    
    