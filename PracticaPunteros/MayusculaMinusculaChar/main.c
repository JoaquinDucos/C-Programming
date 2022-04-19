#include <stdio.h>
#include "funciones.h"

int main (void)
{
  char caracter;
  printf("\nIntroducí un caracter para pasarlo a mayúscula: ");
  scanf("%c", &caracter);
  
  char *p;
  p = &caracter;
 
pasarMayuscula(p);

  printf("\nSu mayúscula es: %c\n\n", caracter) ;

}
