#include <stdio.h>

float pote (int base, int exponente)
{
    float resultado = 1;
    float aux;
  
for (int i = 1 ; i <= exponente ; i++)
   {
      resultado *= base;
   }
    
    if ( exponente == 0)
    {
        resultado = 1;
    }
                  
    if (  exponente < 0 && base < 0)
      {
          resultado = -1;
         for (int i = -1 ; i >= exponente && resultado < 0; i--)
            {
                resultado *= base;
             }
              aux = 1 / -(resultado);
              resultado = aux;
              } 
                   
        if (  exponente < 0 && base < 0)
           {
              resultado = -1;
              for (int i = -1 ; i >= base && resultado < 0; i--)
                  {
                
                       resultado *= base*(-1);
                   }
                   
        aux = - (1 / -(resultado));
       resultado = aux;
       
           }    
      
      
    return resultado;
}
