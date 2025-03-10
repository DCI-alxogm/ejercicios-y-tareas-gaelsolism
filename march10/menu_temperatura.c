#include <stdio.h>
int main(){
    //declaracion de variables.
    //la opcion debe de ser entera;
    int opcion;
    float tk,tc;
    menu:
    //menu mostrado en pantalla
printf("ingrese la opcion que desea transformar. \n");
printf("1.- Celsius a Kelvin\n");
printf("2.- Kelvin a celsius\n");
//leer opcion;
scanf("%d",&opcion);
//inicia estreuctura switch
switch(opcion){
case 1:
    printf("ingrese su temperatura en Celsius\n");
    scanf("%f",&tc);
    tk = tc + 273.15;
    printf("su temperatura %.1f en C son %fK",tc,tk);
break;

case 2:
    printf("ingrese su temperatura en Kelvin \n");
    scanf("%f",&tk);
    tc = tk - 273.15;

    printf("su temperatura %f en k son %f Celsius",tk,tc);
break;

default:
    printf("opcion no valida \n ");
    goto menu;
break;
}
    return 0;

}
