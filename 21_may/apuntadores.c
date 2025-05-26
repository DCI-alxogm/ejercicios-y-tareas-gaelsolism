#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;
    int *ptr;

    printf("Introduce cuántos números deseas ingresar: ");
    scanf("%d", &num);

    // Reservar memoria dinámica
    ptr = (int *)malloc(num * sizeof(int));
    if (ptr == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    printf("\nSize de int: %zu bytes\n", sizeof(int));
    printf("Size del puntero ptr: %zu bytes\n", sizeof(ptr));

    // Ingreso de los números
    printf("\nIntroduce %d números:\n", num);
    for (i = 0; i < num; i++) {
        printf("Número #%d: ", i + 1);
        scanf("%d", ptr + i);
    }

    // Mostrar los números con dirección de memoria
    printf("\nNúmeros ingresados:\n");
    printf("Índice\tValor\tDirección en memoria\n");
    for (i = 0; i < num; i++) {
        printf("%d\t%d\t%p\n", i, *(ptr + i), (ptr + i));
    }

    // Liberar memoria
    free(ptr);

    return 0;
}
