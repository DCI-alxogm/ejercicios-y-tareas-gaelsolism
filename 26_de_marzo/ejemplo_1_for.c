#include<stdio.h>
int main(){
    float temp_c=100,temp_k;
    float final = 200, inicial = 100, delta;
    int n=10, i;
    delta = (final-inicial)/n;
    printf("   Celsius||Kelvin\n");
    for(i=0;i<n;i++){
        temp_k = temp_c + 273.15;
        printf("%f C || %f K \n",temp_c,temp_k);
        temp_c+=delta;
    }

    return 0;
}
