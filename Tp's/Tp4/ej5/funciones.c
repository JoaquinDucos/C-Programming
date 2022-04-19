#include <stdio.h>

int polinomio (int num, int base)
{
   int  aux, aux1, n = 0;
   
   aux = num;
   aux1 = num;   
    
      while(aux>0)
        {
           aux1 /= base;
           aux %= base;
         
           printf("%d*%d%c%d + ", aux, base, 94, n);
    
           n++;
           aux = aux1;
        
        }  
return aux;
}  
