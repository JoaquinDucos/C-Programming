#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int vector[10], i, cont=0;

    for(i=0;i<10;i++)
    {
        printf("\nIngrese el numero del vector para la posición %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
     for(i=0;i<10;i++)
    {
        if(vector[i]%2 == 0)
        {
            cont = cont + 1;
        }
    }
    printf("\n-----------------------------------------\n");
    printf("\n\nLa cantidad de numeros pares en el vector es de: %d, y la de numeros impares es de: %d\n\n", cont, i-cont);

    return 0;
}