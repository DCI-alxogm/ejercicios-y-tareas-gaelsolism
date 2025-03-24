#include<stdio.h>

int main()
{
    float temp_c,temp_k;
    float inicial=100,final=200,delta;
    int n = 10;

    delta = (final-inicial)/n;
    temp_c = inicial;
printf("tabla de grados\n");
    while(temp_c<=final){
     temp_k = temp_c + 273.15;
     printf("%f C || %f K\n",temp_c,temp_k);
     temp_c+=delta;


    }

return 0;
}
