#include<stdio.h>
int main()
{
int numero;
do{
 printf("ingrese un numero positivo\n");
 scanf("%d",&numero);
 if(numero<=0)
{
    printf("numero no valido\n");
}
}while(numero <=0);
printf("numero valido : %d",numero);




return 0;
}
