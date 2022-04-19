#include <stdio.h>

/* Incremento de puntero a Char.   Se van sumando la cantidad de bytes que requiere cada tipo de variable. Por ej:

                                                   char = 1 Byte,    int = 4 Bytes,   Float = 4 Bytes
*/                                
int main ( void) 
{
    char * p = 0x1000;
    int i;

    for( i=0; i<5; i++)
{
    printf("\nPuntero + %d = %p\n", i, p + i);
}}