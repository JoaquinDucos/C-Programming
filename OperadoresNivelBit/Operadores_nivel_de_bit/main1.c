#include <stdio.h>
#include "funciones.h"

/* INFO: Programa para visualizar valor del bit en su posición.*/

int main (void)
{
    char i;
    unsigned int resultado;

    printf("\n\n");
    PrintBits ( 0x6A, 8);
    resultado = GetBit (0x6A, 3);

    for (i = 0 ; i < 5 ; i++)
          printf(" ");

    printf("%d\n", resultado);      
    printf("\n");

    PrintBits (0x6A, 8);
    resultado = GetBit (0x6A, 4);

    for ( i = 0 ; i < 4 ; i++)
           printf(" ");

        
    printf("%d\n", resultado) ;
    printf("\n\n");

    return 0;       

}