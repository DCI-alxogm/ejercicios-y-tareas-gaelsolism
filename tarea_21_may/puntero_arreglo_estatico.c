#include<stdio.h>
int  main(){
    int numeros[6], i, suma = 0;
int *ptr = numeros;

printf("ingresa 6 numeros \n");
for(i=0; i<6; i++){//la variable i indica la posicion en la memoria del arreglo
    scanf("%d",ptr+i);//sin asterisco es para guardar la direccion en la memoria
}
for(i=0;i<6;i++){//la variable i indica el valor de la posicion del arreglo
    suma += *(ptr+i); //con asterisco es para acceder a la memoria y mostrar el valor guardado ahi
}

printf("la suma es %d", suma);
return 0;
}

