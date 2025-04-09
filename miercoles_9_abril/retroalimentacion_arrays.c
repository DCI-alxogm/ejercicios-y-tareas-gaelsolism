#include<stdio.h>
int main()
{
   float tcin,tcfin,delta;
   int N=20, i;
   float TC[N],TK[N];

printf("ingrese la temperatura inicial y la temperatura final\n");
    scanf("%f %f",&tcin,&tcfin);
    delta = (tcfin-tcin)/N;
printf("TCelsius \t TKelvin\n");
    for(i=0;i<N;i++){
        TC[i]=tcin+ i*delta;
        TK[i]=TC[i] +273.15;
        printf("%f \t %f \n",TC[i],TK[i]);
    }

return 0;
}
