//Un  programa  donde  ingresa  por  teclado  un  par  de  valores  no  nulos  X  e  Y,  querepresentan  las coordenadas rectangulares de distintos puntos en el plano. Sepide determinar e informar por pantalla:a)A cual cuadrante pertenece el punto.b)Distancia al origen de coordenadas.

//Compilar como gcc ej3.c -o ej3 -lm -Wall

#include <math.h>
#include <stdio.h>


int main ( void ) 
{
float x, y, dist;

  printf("\nPrograma para la localizacion de puntos dados dentro de los ejes cartesianos.\n");

  printf("\n-------------------------------------\n");
  
  printf("\nAVISO: Recorda introducir unicamente numeros en el programa para evitar errores!\n\n");

  printf("\nIntroduce el valor de coordenadas para el punto X: \n");
    scanf("%f", &x);

  printf("\nIntroduce el valor de coordenadas para el punto Y: \n");
    scanf("%f", &y);
  
  printf("\n-------------------------------------\n");
  
       if( x>0 && y>0)
   {
        printf("\nEl punto dado se encuentra en el primer cuadrante!\n\n");
   }
   
       if( x<0 && y>0)
   {
        printf("\nEl punto dado se encuentra en el segundo cuadrante!\n\n");
   }
   
       if( x<0 && y<0)
   {
        printf("\nEl punto dado se encuentra en el tercer cuadrante!\n\n");
   }
   
       if( x>0 && y<0)
   {
        printf("\nEl punto dado se encuentra en el cuarto cuadrante!\n\n");
   }
   
       if( x==0 && y>0)
   {
        printf("\nEl punto dado se encuentra entre el primer y segundo cuadrante!\n\n");
   }
       if( x==0 && y<0)
   {
        printf("\nEl punto dado se encuentra entre el tercer y cuarto cuadrante!\n\n");
   }
   
       if( x>0 && y==0)
   {
        printf("\nEl punto dado se encuentra entre el primer y cuarto cuadrante!\n\n");
   }
       if( x<0 && y==0)
   {
        printf("\nEl punto dado se encuentra entre el segundo y tercer cuadrante!\n\n");
   }
   
       if( x==0 && y==0)
   {
        printf("\nEl punto dado se encuentra entre el origen de coordenadas!\n\n");
   }
   
   dist = sqrt((x*x)+(y*y));
   
   printf("\nY su distancia al punto de origen es: %7.2f\n\n", dist);
   
   printf("\n-------------------------------------\n\n");
   
     printf("\nFIN DEL PROGRAMA\n\n");
   
    printf("\n-------------------------------------\n\n");
return 0;
}
