#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main (){
    //es la variable donde se guarda el primer menu que albergara todas las instrucciones generales
int opcion_menu;
//segunda variable de almacen tipo char para temperatura
char opc_temp;
//variables del caso 1 temperatura
float tk,tc;
// variables de la seccion 2 coordenadas
float r_cil,r_esf,theta,phi,x,y,z;
//variable de respuesta si quieres ttrabajar en radianes o no; 
char respuesta_rad[4];
//variiable de memoria switch anidado, si el usuario decida que coordenadas tomar
char opc_coordenadas;
//opcion de memoria para el switch final del caso 3 
char opc_conversion;
//variables del caso 3 
float kg,lb,temperatura_celsius_tercer_caso,tf,Litros,Galones,metros,pies;



//primer menu visible
printf("bienvenido, seleccione el numero de la instruccion que desee ejecutar.\n");
printf("1.-transformación de temperatura\n");
printf("2.- Transformacion de coordenadas\n");
printf("3.-Conversion de unidades del SI al sistema inglés\n");
scanf("%d",&opcion_menu);
switch(opcion_menu){
    case 1:
    
    //primer switch anidado
    printf("a) Celsius a Kelvin\n");
    printf("b) kelvin a Celsius\n");
    scanf(" %c",&opc_temp);//debe de ir un espacio antes del %c para evitar conflictos
    switch(opc_temp){
case 'a':
printf("introduzca sus grados Celsius\n");
scanf("%f",&tc);
tk = tc + 273.150;
printf("%f en celsius son %f kelvin",tc,tk);
break;
case 'b':
printf("introduzca sus kelvin");
scanf("%f",&tk);
tc = tk -  273.15;
printf("%f en kelvin son %f celsius ",tk,tc);
break;
default:
printf("opcion no valida");

                     }
break;
    
    
    
    //inicia caso coordenadas
    case 2:
    
    printf("desea trabajar en radianes?\n");
    scanf(" %s",respuesta_rad);
    if(strcmp(respuesta_rad,"si")== 0)
    {
    printf("c)cartesianas a esfericas\n");
    printf("d)cartesianas a cilindricas\n");
    scanf(" %c",&opc_coordenadas);
    switch(opc_coordenadas){
  
    case 'c':
    //se puede usar un mismo scanf para varias variables
    printf("introduzca sus coordenadas x,y,z  respectivamente\n");
    scanf("%f %f %f",&x, &y, &z);
   
    //se definen las variables donde vamos a almacenar los resultados
     r_esf = sqrt((x*x)+(y*y)+(z*z));
    
     //esta instrucción es mas viable para arcotangente, 
     //la funcion atan no lee bien los cuadrantes
     theta = atan2(y,x);
     phi = acos((z)/(r_esf));
    
    
     //salida del codigo para esfericas.
     printf("para esfericas \n");
      printf("r es %f \n",r_esf);
     printf("theta es %f \n",theta);
     printf("phi es %f \n",phi);
    break;
       
       case 'd':
       //se puede usar un mismo scanf para varias variables
    printf("introduzca sus coordenadas x,y,z  respectivamente\n");
    scanf("%f %f %f",&x, &y, &z);
   
    //se definen las variables donde vamos a almacenar los resultados
    r_cil = sqrt((x*x)+(y*y));
     
     //esta instrucción es mas viable para arcotangente, 
     //la funcion atan no lee bien los cuadrantes
     theta = atan2(y,x);
    
     //salida del codigo para cilindricas.
     printf("para cilindricas es:\n");
     printf("r es %f \n",r_cil);
     printf("theta es %f \n",theta);
    break;
     
     default:
     printf("opcion no valida");
     break;
    }
    } 
    
   
   
   
   
   
   
    else
    {
    printf("c)cartesianas a esfericas\n");
    printf("d)cartesianas a cilindricas\n");
    scanf(" %c",&opc_coordenadas);
    switch(opc_coordenadas){
  
    case 'c':
    //se puede usar un mismo scanf para varias variables
    printf("introduzca sus coordenadas x,y,z  respectivamente\n");
    scanf("%f %f %f",&x, &y, &z);
   
    //se definen las variables donde vamos a almacenar los resultados
     r_esf = sqrt((x*x)+(y*y)+(z*z));
    
     //esta instrucción es mas viable para arcotangente, 
     //la funcion atan no lee bien los cuadrantes
     theta = atan2(y,x)*(180.0/3.1416);
     phi = acos((z)/(r_esf))*(180.0/3.1416);
    
    
     //salida del codigo para esfericas.
     printf("para esfericas \n");
      printf("r es %f \n",r_esf);
     printf("theta es %f \n",theta);
     printf("phi es %f \n",phi);
    break;
       
       case 'd':
       //se puede usar un mismo scanf para varias variables
    printf("introduzca sus coordenadas x,y,z  respectivamente\n");
    scanf("%f %f %f",&x, &y, &z);
   
    //se definen las variables donde vamos a almacenar los resultados
    r_cil = sqrt((x*x)+(y*y));
     
     //esta instrucción es mas viable para arcotangente, 
     //la funcion atan no lee bien los cuadrantes
     theta = atan2(y,x)*(180.0/3.1416);
    
     //salida del codigo para cilindricas.
     printf("para cilindricas es:\n");
     printf("r es %f \n",r_cil);
     printf("theta es %f \n",theta);
    
     break;
    }
    
        
    }
    
    
   
        break;// fin del caso 273
        
        
        
        
        //dios mio empezo el caso 3 creí no lograrlo hasta aquí.
            case 3:
            printf("haz elegido la conversion del SI al Sist. ingles\n");
            printf("e)kilogramos kg a libras lb\n");
            printf("f)metros m a pies ft\n");
            printf("g)Litros L a Galones Gal\n");
            printf("h) celsius a Fahrenheit\n");
            scanf(" %c",&opc_conversion);
            switch(opc_conversion){
                case 'e':
                printf("ingrese los kilogramos a convertir\n");
                scanf("%f",&kg);
                lb = kg * 2.20462;
                printf("%f kg son %f lb",kg,lb);
                break;
                
                case 'f':
                printf("introduzca la unidad en metros\n");
                scanf("%f",&metros);
                pies = metros * 3.28084;
                printf("%f metros son %f pies",metros,pies);
                break;
                
                case 'g':
                printf("introduzca unidad de litros\n");
                scanf("%f",&Litros);
                Galones = Litros * 0.264172;
                printf("%fL es equivalente a %f Gal",Litros,Galones);
                break;
                
                case 'h':
                printf("introduzca escala de Celsius\n");
                scanf("%f",&temperatura_celsius_tercer_caso);
                tf = (temperatura_celsius_tercer_caso * 1.8) + 32;
                printf("%f Celsius son %f Fahrenheit",temperatura_celsius_tercer_caso,tf);
                break;
                
                default:
                printf("opcion no valida");
                break;
                 }
            
             break;
             
             
             
                default:
                    printf("opcion no valida");
                break;

}




return 0;
}
