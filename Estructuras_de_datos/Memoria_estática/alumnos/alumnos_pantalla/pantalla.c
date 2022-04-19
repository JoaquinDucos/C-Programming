#include <stdio.h>

void MostrarDatos(ALUMNO *alumno)
{
printf( "Legajo:", "%d" , &(alumno->Legajo));
printf( "Nombre:", "%s" , alumno->Nombre);
printf( "Apellido:", "%s" , alumno->Apellido);
printf( "Carrera:", "%s" , alumno->Carrera);
printf( "Regional:", "%s" , alumno->Regional);
printf( "Promedio General:", "%4.1f" , alumno->legajo);

return 0;
}