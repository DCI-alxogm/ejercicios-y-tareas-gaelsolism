// revision del ejercicio de la clase del 19 de febrero del 2025
#include <stdio.h>
#include <math.h>

int main (){

float x,y,z; //coordenadas cartesianas de entrada
float r,theta, phi; //coordenadas esfericas de salida
float rc;//theta_c,zc; //coordenadas cilindricas de salida

printf("introduce los valores de las variables x,y,z \n");
//scanf("%f",&x);
//scanf("%f",&y);
//scanf("%f",&z);
scanf("%f %f %f",&x,&y,&z);

//realizo operaciones de transformación de coordenadas esfericas
r = sqrt( x*x + y*y +z*z );
theta = atan(y/x);
phi = acos(z/r);

//coordenadas cilindricas
rc = sqrt( x*x + y*y );
//theta_c = atan (y/x);
// zc = z;
// salida
printf("las coordenadas esfericas son r = %f, theta = %f, phi = %f \n ",r,theta,phi);
printf("las coordenadas cilindricas son r = %f, theta = %f, z = %f\n ",rc,theta,x);
return 0;
}
