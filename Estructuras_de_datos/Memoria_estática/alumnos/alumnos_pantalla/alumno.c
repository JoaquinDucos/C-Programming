#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>


/*#ifndef ARCHIVO_H_
  #define ARCHIVO_H_

  #define MAX 1000

  #endif
*/

struct alumno
{
    unsigned int legajo;
    char Nombre [ 30 ];
    char Apellido [ 30 ];
    char Carrera [ 30 ];
    char Regional [ 30 ];
    float PromedioGeneral;

};

int IngresoDeDatos(ALUMNO * alumno)
{
    float aux;
    IngresoDeDato ( "Legajo:", "%d" , &(alumno->Legajo));
    IngresoDeDato ( "Nombre:", "%s" , alumno->Nombre);
    IngresoDeDato ( "Apellido:", "%s" , alumno->Apellido);
    IngresoDeDato ( "Carrera:", "%s" , alumno->Carrera);
    IngresoDeDato ( "Regional:", "%s" , alumno->Regional);
    IngresoDeDato ( "Promedio General:", "%f" , &aux);

    alumno->PromedioGeneral = aux;

return 0;
}

typedef struct alumno;

void IngresoDeDato (const char *cartel, const cc, void *dato)
{
    printf("%s", cartel);
    scanf(cc, dato);
} 