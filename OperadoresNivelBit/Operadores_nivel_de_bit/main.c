#include <stdio.h>
#include "funciones.h"



unsigned char GetBit ( unsigned int dato, char bit);

int main (void)
{
    unsigned int resultado = 0x3A;

    printf("\nEl valor del dato es: 0xA\n");
    resultado = GetBit (0x6A, 3);

    printf("\nEl valor del bit3 es: %d\n", resultado);
    resultado = GetBit (0x6A, 4);
    printf("\nEl valor del bit4 es: %d\n\n", resultado);

    return 0;
    
}