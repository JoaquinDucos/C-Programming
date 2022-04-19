#include <stdio.h>

int main()
{
    printf("Bienvenido al escritor\n!");

    FILE* miarchivo = NULL;

    char* nombrearchivo = "Data.txt";

    miarchivo = fopen(nombrearchivo, "w");

    if(miarchivo == NULL) return -1; //Para interrumpir el ciclo por di devuelve algo que no sea null

    fprintf(miarchivo, "Hola soy un archivo! \n");

    fclose(miarchivo);

    return 0;
}
