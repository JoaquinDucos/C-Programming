//Ingresar un número entero por teclado y determinar si es primo.

#include <stdio.h>

int main (void)
{
  int A, i=0, CantResto=0;
  
  printf("-------------------------------------\n\n");
  
  printf("Programa para saber si un numero es primo o no.\n\n");
  
  printf("Aviso: No te olvides que unicamente podras introducir numeros enteros positivos!");
  
  printf("\n\n-------------------------------------\n");
  
     printf("\nIntroduce un numero entero: \n");
     
    scanf("%d", &A);
      
    if (A==0)
    {
        printf("\nLa division del 0 no esta definida debido a que no puede dividirse por el mismo! Por lo tanto no es ni primo ni compuesto.\n\n");
    }
    if (A==1)
    {
           printf("\nEl numero es primo!\n\n");  
    }
    while (A<0)
    {
        printf("\nNumero no valido, por favor introduce uno nuevo: \n");
        scanf("%d", &A);
    }
   for (i = 1; i<= A; i++)
         {
              if(A%i==0)
                {
                        CantResto++;
                }
         }
   
  
   if (CantResto==2)
   {
        printf("\nEl numero es primo!\n\n");
    }
       else
       {
          if( A!=0 && A!=1)
          {
           printf("\nEl numero no es primo!\n\n");
          }
       }
       
   printf("-------------------------------------\n\n");
   
   printf("FIN DEL PROGRAMA\n\n");
       
 return 0;
}      
