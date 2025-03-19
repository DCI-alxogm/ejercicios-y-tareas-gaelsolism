#include<stdio.h>
#include<math.h>
int main()
{
int opcion;
float base, altura, area; 
float tc, tf;
int numero, digito;



printf("seleccione la accion que desea\n");
printf("1. calcular area de rectangulo\n");
printf("2. convertir grados celcius a farhenheit\n");
printf("3. verificar si un  numero es multiplo de otro \n");
printf("sumar los digitos de un numero de dos cifras\n");
scanf("%d",&opcion)
switch(opcion){

case 1:
printf("ingrese la base y la altura \n");
scanf("%f %f",&base,&altura);
area = base * altura;
printf("area es %f \n",area);
break;




case 2:
printf("ingrese su temperatura en celsius\n");
tf = (tc * 1.8) +32
printf("su temperatura es %f fahrenheit",tf);

break;



case 3:
printf("ingrese 2 numeros");
scanf(" %d %d ",&numero,&digito);
if(numero % digito == 0){
printf("%d es multiplo de %d. \n",numero,digito);
}
else {
printf("no es multiplo");
}
break;



case 4:
printf("ingrese un numero de dos cifras");
 break;



default:
printf("opcion no valida");
break;











}














return 0;

}