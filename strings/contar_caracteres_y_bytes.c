#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <alloc.h>

int main()
{
      
      int n;
      char* pcadena;
      
      printf("Ingrese el numero de caracteres de la cadena:");
      
      scanf("%d",&n);
      
      pcadena=(char*)malloc(n*sizeof(char));
      
      printf("\nSe ha reservado espacio de memoria para %d caracteres\n", n);
      
      printf("\nIngrese la cadena: ");
      
      scanf("%s", pcadena);

       if(strlen(pcadena) > n)
      {
          printf("\nLa cantidad de caracteres ha superado el espacio reservado de memoria\n");
      }
      else
      {
      printf("\nEl valor almacenado en la variable de la cadena es: %s, y ocupa %li bytes\n\n", pcadena, strlen(pcadena));
      }
return 0;
}