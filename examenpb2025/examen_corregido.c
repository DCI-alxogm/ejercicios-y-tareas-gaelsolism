#include<stdio.h>
int main()
{
float base,altura,area; /*variables de caso 1*/
int opcion;  /*variable de opcion del switch*/
float tc,tf;//caso 2
int n1,n2; //caso 3
int numero,suma;//caso 4
int i=0;
while (i==0){
printf("seleccione una opcion\n");
printf("1.-calcular area de un rectangulo\n");
printf("2.-convertir grados celsius a grados fahrenheit\n");
printf("3.-verificar si un numero es multiplo de otro\n");
printf("4.-sumar los digitos de un numero de dos cifras\n");
scanf("%d",&opcion);
switch(opcion)
{
case 1:
    printf("ingrese la base y la altura\n");
    scanf("%f %f",&base,&altura);
    area = base * altura;
    printf("el area de su rectangulo es de %f\n",area);
break;

case 2:
    printf("ingrese sus grados en escala celsius\n");
    scanf("%f",&tc);
    tf = (tc * 1.8)+32;
    printf("su temperatura en farhenheit es de %f\n",tf);
    break;


case 3:

 printf("ingrese dos numeros\n");
 scanf("%d %d",&n1,&n2);
 if(n1 % n2 == 0)
{
        printf("%d si es multiplo de %d \n",n1,n2);
}
else
{
        printf("%d no es multiplo de %d \n",n1,n2);
}
break;


case 4:

    printf("ingrese un numero de dos digitos\n");
    scanf("%d",&numero);
    if( numero >= 10 && numero <= 99)
    {
       suma = (numero/10) + (numero % 10);
       printf("la suma de los dos digitos es de %d \n",suma);
    }
    else if (numero < 10 || numero >99 )
    {
        printf("El numero ingresado no es valido, debido a que no entra en el intervalo establecido\n");

    }
    break;

default:
    printf("opcion no valida\n");
    break;





}



printf(" volver a ejecutar el programa?\n");
printf("si : 0 \n");
printf("no : presione cualquier numero para salir\n");
scanf("%d",&i);
}

return 0;
}
