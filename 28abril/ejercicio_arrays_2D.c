#include <stdio.h>

int main()
{
    int n_filas =3,m_cols = 3;
    float array_2d_1[n_filas][m_cols];
     float array_2d_2[n_filas][m_cols];
    float suma_array[n_filas][m_cols];
	
printf("ejercicio 1 arrays \n");
	
	
for(int i=0;i<n_filas;i++){
    for(int j=0;j<m_cols;j++){
        scanf("%f",&array_2d_1[i][j]);
	    }    
	}

for(int i=0;i<n_filas;i++){
    for(int j=0;j<m_cols;j++){
        scanf("%f",&array_2d_2[i][j]);
	    }    
	}
	
for(int i=0;i<n_filas;i++){
    for(int j=0;j<m_cols;j++){
        suma_array[i][j] = array_2d_1[i][j] + array_2d_2[i][j];
        printf("%f \t",suma_array[i][j]);
    }
    printf("\n");
}
	
	

	return 0;
}