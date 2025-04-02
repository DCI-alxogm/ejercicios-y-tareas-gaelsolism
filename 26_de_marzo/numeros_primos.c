#include<stdio.h>
int main()
{
int a,b, contador = 0, primos_por_linea = 20, primos_en_linea = 0;
printf("vamos a calcular los numeros primos en un intervalo [a,b] \n");
printf("ingrese el valor inicial de a: \n");
scanf("%d",&a);
printf("\n ingrese su valor final \n");
scanf("%d",&b);

while(1)//nos vamos a asegurar que sean menos de 100 primos
{
    contador = 0;  //resetear el contador a cero
    primos_en_linea = 0; //resetear los primos en linea a cero
    for(int num = a; num <= b; num ++){ //revisar cada numero
        int es_primo = 1; //asumimos que el numero es primo
        for(int i=2;i*i <= num;i++){
                if(num % i == 0){
                    es_primo = 0; // no es primo
                    break;
                }

        }

        if(num>1 && es_primo == 1){
                printf("%d ",num);
        contador++; //incrementamos el contador de primos
        primos_en_linea++; //en esta variable vamos a contar los primos en linea, esto nos servira para que lo comparemos con  el numero maximo de primos en linea

            if(primos_en_linea >= primos_por_linea){
                printf("\n");
                primos_en_linea = 0;
            }


        }



     }
      //si se contaron mas de 100 primos vamos a hacer lo siguiente+
     if(contador >=100){
        printf("\n se alcanzó el limite de numeros primos \n");
        break;
        }

        //mostrar el total de numeros primos encontrados
        printf(" \ntotal de primos encontrados %d",contador);

        //preguntar si el usuario quiere continuar con el ciclo
        printf("\ndesea probar otro intervalo¿? (1 = si, 0 = no) \n");
        int respuesta;
        scanf("%d",&respuesta);
        if(respuesta == 0){
            break; // esto rompera el ciclo while
        }
        else{
            printf("Ingrese el valor inicial de a: \n");
            scanf("%d",&a);
            printf("Ingrese su valor final de b: \n");
            scanf("%d",&b);
            }

}


return 0;
}
