#include<stdio.h>
int main()
{
    float x_f,x_i,delta,x;
printf("este programa tiene como objetivo calcular x cuadrada\n");
printf("ingrese su valor inicial, valor final y el incremento\n");
scanf("%f %f %f",&x_i,&x_f,&delta);
printf("tabla de valores");
printf("x || f(x)");
x = x_i;
do
{
 printf("%.2f || %.2f\n",x,x*x);
 x+= delta;

}while(x<=x_f);

return 0;
}
