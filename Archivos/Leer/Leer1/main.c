#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bienvenidos al lector\n");

    FILE* miarchivo = NULL;

    char* nombrearchivo= "texto";
    char lectura[80];

    miarchivo = fopen(nombrearchivo, "r");

    if(miarchivo == NULL) return -1;

    fscanf(miarchivo, " %[^\n]", lectura);
    printf("Lectura: %s\n", lectura);

    fclose(miarchivo);


    return 0;
}
