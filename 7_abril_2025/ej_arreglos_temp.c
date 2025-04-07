#include<stdio.h>
int main()
{
float tc[20], tk[20];
float delta,tf,ti;
printf("vamos a hacer una tabla de temperatura, partiremos desde grados celsius, despues transformaremos cada columna en Kelvin\n");
printf("ingrese la temperatura inicial\n");
scanf("%f",&ti);
printf("ingrese la temperatura final\n");
 scanf("%f",&tf);
 delta = (tf-ti)/20;
 printf("Celsius || Kelvin \n");
 for(int i = 0; i <= 20; i++){
    tc[i] = ti + i * delta;
    tk[i] = tc[i]+ 273.15;
    printf("%f  %f \n",tc[i],tk[i]);
 }
return 0;
}
