#include <stdio.h>
#include "funciones.h"
int polinomio ( int num , int base )
{
   int aux , n = 0 , aux1 = 0 , x, resto;
    
      aux = num ;
      aux1 = aux ;

             while (aux > 0)
              {
                 aux /= 10 ;
            
                 n++ ;
              }  
              
      aux = aux1 ;
      x = n ;
        
             while (n > 0)
              {
                  x = n - 1 ;
                  
                     
                while ( n != 1 )
                 {
                     aux /= 10 ;
                     n-- ;
                 }
            
                  n = x ;
            
                  resto = aux%base;
            
                  printf("%d*%d%c%d ", resto, base, 94, x);
            
                  aux = aux1;
            
                       if (n > 0)
                       {
                          printf (" + ");
                       }
              }
         
return 0;        

}
