#include<stdio.h>
int main(){

int x_fin,x_in; //numero de filas
int y_in,y_fin;
int filas,columnas;
float delta; // variable de incremento
// calcular el numero de finlas y el de columnas

printf("ingrese el inicio luego final en y\n ");
scanf("%d %d",&x_in,&x_fin);

printf("ingrese el inicio luego final en y\n ");
scanf("%d %d",&y_in,&y_fin);

printf("ingrese el incremento delta\n ");
scanf("%f",&delta);

 filas = ((x_fin-x_in)/(delta))+1;//le sumamos uno para contemplas el dato cero
 columnas = ((y_fin-y_in)/(delta)+1); //igual aqui jaja

float x[filas][columnas];
float y[filas][columnas];

for(int i=0;i<=filas;i++){
    for(int j=0;j<columnas;j++){
        x[i][j]= x_in + i*delta;//recorre en eje x
        y[i][j]= y_in + j*delta; //recorre en eje y
    }
}
    //imprimir la reticula, es el mismo ciclo pero en vez de operacion va el printf
    printf("x,y");
    for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        printf("%.3f,%.3f \n",x[i][j],y[i][j]);
    }
}




return 0;
}
