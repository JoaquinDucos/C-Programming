#include <stdio.h>
#include "funciones.h"

int main (void)
{
   int var, nuevo;
   
   printf("Introducí una variable: ");
   scanf("%d", &var);
   
   printf("Introducí otra variable que reemplazará a la primera: ");
   scanf("%d", &nuevo);
   
   modificaVar( &var, nuevo);
   
   printf("\nEl nuevo valor de la variable es: %d \n", var);

return 0;
}

