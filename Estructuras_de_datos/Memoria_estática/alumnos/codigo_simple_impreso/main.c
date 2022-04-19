#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct alumno_s
{
    char nombre[30];
    int legajo;
    char carrera[30];
};

int main()
{
    struct alumno_s alumno1;

    strcpy (alumno1.nombre, "Joaquin Ducos");
    alumno1.legajo = 15536;
    strcpy(alumno1.carrera, "Electrónica");

    printf("\nAlumno: %s", alumno1.nombre);
    printf("\nLegajo: %d", alumno1.legajo);
    printf("\nEspecialización: %s", alumno1.carrera);

    printf("\n\n----FIN DE CARGA DE DATOS------\n\n");

    return 0;
}


