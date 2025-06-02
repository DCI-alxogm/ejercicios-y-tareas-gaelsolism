#include<stdio.h>

void menu(){//0_ya tenemos la primera, void sin argumentos de entrada ni salida
    printf("\n seleccione la accion que desea usted hacer\n");
    printf("1.- Calcular area de un rectangulo\n");
    printf("2.-convertir celsius a fahrenheit \n");
    printf("3.-verificar si un numero es multiplo de otro \n");

}
//1.- void con argumentos de entrada
void area_rec(float base, float altura){
    float area = base * altura;
    printf("el area es %f",area);
}

float conversion_T(){//funcion sin argumentos pero con valores de retorno
    float celsius;
    printf("ingrese la temperatura en celsius \n");
    scanf("%f",&celsius);
    return celsius * 1.8 + 32;
}

//funcion con argumentos y retorno
int multiplo(int n1, int n2){
return (n1%n2==0);
}

int main(){
int repetir = 1;
int opcion;

    while(repetir == 1){

menu();
scanf("%d", &opcion);
    switch(opcion)  {
case 1:{
    float base, altura;
    printf("ingrese base y altura\n");
    scanf("%f %f",&base,&altura);
    area_rec(base,altura);
    break;
}
case 2 :{
    float fahrenheit = conversion_T();
    printf("la temperatura en fahrenheit es de %f \n",fahrenheit);

    break;
}
case 3 :{
    int n1,n2;
    printf("ingrese dos numeros");
    scanf("%d %d",&n1,&n2);
    if(multiplo(n1,n2)){
     printf("el numero %d es multiplo de %d\n",n1,n2);
       }
       else{
        printf("el numero %d no es multiplo de %d\n",n1,n2);
       }

    break;
}

default:{
    printf("opcion no valida\n");
    break;
}


}
 printf("repetir el programa? si= 1 , no = cualquier numero");
 scanf("%d",&repetir);

}








return 0;
}
