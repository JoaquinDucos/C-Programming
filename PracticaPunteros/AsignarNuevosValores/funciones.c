#include <stdio.h>


void modificaVar( int * p, int valor)
{
       printf("La dirección donde está guardada la variable es: %p \n", p);
       printf("El valor actual de la variable es: %d\n\n", *p);

       *p = valor;
}    
