#include<stdio.h>
int main()
{
    int respuesta;
    do{
int i, N=20;
float TC[N],TK[N];

printf("ingrese los datos tomados en su practica de laboratorio en celsius (max. 20)\n");
for(i=0;i<N;i++){
    scanf("%f",&TC[i]);

}
 printf("\nTcelsius |\t| Tkelvin \n");
    for(i=0;i<N;i++){
        TK[i] = TC[i] + 273.15;
        printf("%.3f    |\t| %.3f \n",TC[i],TK[i]);
    }







printf("presione cualquier numero para repetir presione cero para salir \n");

scanf("%d",&respuesta);
    }while(respuesta != 0);
    return 0;
}
