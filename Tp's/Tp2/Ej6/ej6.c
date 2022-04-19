//Escribir un programa que realice la sumatoria del rango de números enterosentre dos valores ingresados por teclado.

#include <stdio.h>

int main (void) 
{
int A, B, n = 0;

     printf("\nSumatoria de rangos entre numeros enteros.\n");
     
     printf("\n--------------------------------\n");
     
     printf("\nRecordatorio: No te olvides de introducir unicamente numeros enteros positivos, incluyendo al cero!\n");
     
     printf("\n--------------------------------\n");

      printf("\nIntroduce el primer valor: \n");
      scanf("%d", &A);
      
      printf("\nIntroduce el segundo valor: \n");
      scanf("%d", &B);
      
      printf("\n--------------------------------\n");
      
  if (A<0 || B<0){    
      
      printf("\n\nHas introducido valores negativos, el programa no acepta estos valores, prueba nuevamente con valores naturales incluyendo al 0!\n\n");
  }

  else
  {
     
     printf("\nEl rango definido se encuentra comprendido dentro de los valores %d y %d.\n\n", A, B);
   }      
    if (A == B)
    {
        printf("\nLa suma es 0\n");
    }
    
   else if (B>A)
    {     
      while (A<B)
      {
          A = A + 1;
          n +=  A;
      }
        n -= A;
      
        printf("\nLa sumatoria del rango de numeros introducidos es: %d.\n\n", n);
    }
     else
     {    
      while (A>B)
      {
          B = B + 1;
          n += B;
      }
        n -= B;
        
       printf("\nY la sumatoria del rango de numeros introducidos es: %d\n\n", n);
     }
  }
     printf("\n--------------------------------\n");
     
     printf("\nFIN DEL PROGRAMA\n\n");
     
     printf("--------------------------------\n\n");
     
return 0;
}
