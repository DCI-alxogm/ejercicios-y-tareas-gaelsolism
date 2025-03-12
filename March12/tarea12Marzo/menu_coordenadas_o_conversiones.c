#include <stdio.h>
#include <string.h>
#include <math.h>
//cristian Gael Solis Mercado, ing Quimica Sustentable, 12 mrzo 2025
int main() {
    char opc_gral;
    int opc_unidades;
    float m, kg, c, l;
    float ft, lb, f, gal;
    int opc_coordenadas;
    char respuesta_rad[4];
    float x, y, z, r, theta, phi;

    printf("Bienvenido, seleccione la accion que desea hacer\n");
    printf("Nota: Por favor elija la opcion en Mayusculas\n");
    printf("A) Conversion de unidades SI a sistema ingles\n");
    printf("B) Coordenadas cartesianas\n");
    scanf(" %c", &opc_gral);

    switch (opc_gral) {
        case 'A':
            printf("Ha elegido la conversion de unidades a sistema ingles\n");
            printf("Elija la opcion que desea:\n");
            printf("1.- Longitud (m a ft)\n");
            printf("2.- Masa (kg a lb)\n");
            printf("3.- Temperatura (C a F)\n");
            printf("4.- Volumen (L a gal)\n");
            scanf("%d", &opc_unidades);

            switch (opc_unidades) {
                case 1:
                    printf("Ingrese la cantidad de longitud en metros:\n");
                    scanf("%f", &m);
                    ft = m * 3.28084;
                    printf("%.2f metros equivalen a %.2f pies\n", m, ft);
                    break;
                case 2:
                    printf("Ingrese la cantidad de masa en kg:\n");
                    scanf("%f", &kg);
                    lb = kg * 2.20462;
                    printf("%.2f kg equivalen a %.2f libras\n", kg, lb);
                    break;
                case 3:
                    printf("Ingrese la cantidad de temperatura en Celsius:\n");
                    scanf("%f", &c);
                    f = (c * 1.8) + 32;
                    printf("%.2f C equivalen a %.2f F\n", c, f);
                    break;
                case 4:
                    printf("Ingrese la cantidad de volumen en litros:\n");
                    scanf("%f", &l);
                    gal = l * 0.264172;
                    printf("%.2f litros equivalen a %.2f galones\n", l, gal);
                    break;
                default:
                    printf("Opcion no valida\n");
            }
            break;

        case 'B':
            printf("Ha elegido conversion de coordenadas cartesianas\n");
            printf("Seleccione la conversion:\n");
            printf("1.- A coordenadas esfericas\n");
            printf("2.- A coordenadas cilindricas\n");
            scanf("%d", &opc_coordenadas);

            printf("Ingrese las coordenadas cartesianas (x, y, z):\n");
            scanf("%f %f %f", &x, &y, &z);

            printf("¿Desea los resultados en radianes? (si/no)\n");
            scanf("%s", respuesta_rad);
            int en_radianes = strcmp(respuesta_rad, "si") == 0;

            switch (opc_coordenadas) {
                case 1: // Conversión a esféricas
                    r = sqrt(x * x + y * y + z * z);
                    theta = acos(z / r);
                    phi = atan2(y, x);

                    if (!en_radianes) { // Convertir a grados si es necesario
                    theta = theta * (180.0 / M_PI);
                    phi = phi * (180.0 / M_PI);

                    }

                    printf("Coordenadas esfericas:\n");
                    printf("r = %.2f\n", r);
                    printf("theta = %.2f %s\n", theta, en_radianes ? "radianes" : "grados");
                    printf("phi = %.2f %s\n", phi, en_radianes ? "radianes" : "grados");
                    break;

                case 2: // Conversión a cilíndricas
                    r = sqrt(x * x + y * y);
                    theta = atan2(y, x);

                    if (!en_radianes) {
                theta = theta * (180.0 / M_PI);

                    }

                    printf("Coordenadas cilindricas:\n");
                    printf("r = %.2f\n", r);
                    printf("theta = %.2f %s\n", theta, en_radianes ? "radianes" : "grados");
                    printf("z = %.2f\n", z);
                    break;

                default:
                    printf("Opcion no válida\n");
            }
            break;

        default:
            printf("Opcion no valida\n");
    }

    return 0;
}
