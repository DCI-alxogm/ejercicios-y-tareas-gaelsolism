#include<stdio.h>

int main ()
{
 int N = 20;//tamaño del arreglo
float x[N], y[N]; //declaramos variable tipo array y su tamaño
float suma_x=0,suma_y=0,suma_xy=0,sumax2=0; //en estas variables se van a calcular todo el sumatorio, de esta forma se puede hacer el calculo mas eficiente.
float m, b;
printf("vamos a calcular la recta se una regresion lineal tipo y = mx+b \n");
for(int i=0; i<N; i++){
printf("Dato %d \n",i+1);
printf("X ");
scanf("%f",&x[i]);
printf("Y ");
scanf("%f",&y[i]);

suma_x = suma_x + x[i]; //este operador va acumulando las x y suma las variables conforme avanza el ciclo
suma_y += y[i];
sumax2 += x[i] * x[i];
suma_xy += x[i] * y[i];
}
m = ((N * suma_xy) - (suma_x * suma_y)) /((N * sumax2) - (suma_x* suma_x));
b = (suma_y - m*suma_x)/(N);

printf("La grafica de sus datos es: y = %.4fX + %.4f\n", m, b);










return 0;
}
