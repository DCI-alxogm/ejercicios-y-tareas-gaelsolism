/******************************************************************************

Cristian Gael Solis Mercado.
hoy es 26 de febrero del 2025


*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero, numero2, residuo, residuo2;
    int respuesta;
    printf("vamos a determinar si un numero es par o non \n");
    printf("ingrese el numero que desee saber si es par o no \n");
    scanf("%d",&numero);
    //operaciones 1 
    residuo = numero % 2;
    //primera condicion
    if(residuo == 0)

    {
        printf(" el numero %d es par",numero);
    }
    else if( residuo !=0 )
    {
        printf(" el  numero %d es impar ",numero);
    }
    //fin de la primera condicion
    
    
    //no podemos usar while aun
    
    
    
    printf("\n probamos con otro numero¿? \n ");
    //no podemos usar switch aun
    //no es conveniente meternos con arreglos de caracteres aun
    //volvemos a declarar nuestras variables
    printf("1.- si \n");
    printf ("2 .-no \n"); 
    scanf("%d",&respuesta);
    if(respuesta == 1)
    {
        printf("ingrese el numero que desee saber si es par o no \n");
        scanf("%d",&numero2);
        //segunda operacion
        residuo2 = numero2 % 2;
        if(residuo2 == 0)

    {
        printf(" el numero %d es par",numero2);
    }
    else if( residuo2 !=0 )
    {
        printf(" el  numero %d es impar ",numero2);
        
    }
    
    else 
        
        
      return 0;   
    }   
} 

   
