#include <stdio.h>

#define CONSTANTE 32;

void pasarMayuscula (char *p)    //el argumento que se le pasa a esta funcion va a ser una dirección
{                                // por ende, es *p, porque se va a referir al contenido de lo que aputnó en ese argumento
   if(*p >= 'a' && *p <= 'z')
   {
       *p = *p - CONSTANTE;
   }
   
}
