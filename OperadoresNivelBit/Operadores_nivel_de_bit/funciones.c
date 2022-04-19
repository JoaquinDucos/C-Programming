#include <stdio.h>
#include <stdlib.h>

unsigned char GetBit ( unsigned int dato, char bit)
{
    unsigned char resultado, mascara = 1;
    resultado = (dato >> bit) & mascara;
    return resultado;
}

void PrintBits( unsigned int dato, char nbits)
{
    nbits--;
    printf("b");

    for ( ; nbits >=0; nbits --)
    
          printf("%d", GetBit(dato, nbits));

    printf(" (0x%02X) \n", dato);

    return;
    
}