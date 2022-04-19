#include <stdio.h>

int main (void) 
{
int n, MontoBonif=1000;
float articulos, Sum, Faltante;


for (n=1; n<=5; n++)
   {
    
                 printf("\nIngrese el valor del articulo %d: \n$",n);
                 scanf("%f", &articulos);
    
                      Sum+=articulos;
   
             
          if (articulos<0)
                 {
                      
                       while( articulos<0)
                            {
                                  
                                   printf("\nValores introducidos erroneos. No pueden contener un costo negativo!\n");
                                   printf("\nIntroduce nuevamente valores, y positivos!\n");
     
                              for(n=1; n<=5; n++)
                                 {
                                 
                                            printf("\nIngrese el valor del articulo %d: \n$",n);
                                            scanf("%f", &articulos);
    
                                                 Sum+=articulos;
                                 }
                            }             
                 }
   }          
       
   printf("\n\n-----------------------------------------\n\n");
   

          if(Sum>MontoBonif)
            {
    
                 printf("\nEl precio de los articulos es de: $%7.2f  \n", Sum);
    
                       Sum = Sum - 100;
                       
                 printf("\nLa compra ha superado los $%d, obtienes un descuento de $100!\n", MontoBonif);
                 printf("\nEl precio total a pagar es de: $%7.2f \n\n", Sum);
            }
            
          else if(Sum<MontoBonif)
              {
                 printf("\nEl precio total a pagar es de: $%7.2f \n", Sum);
                 
                 Faltante = MontoBonif - Sum;
                 
                 printf("\nTe faltan $%7.2f para poder obtener un descuento de $100!\n\n", Faltante);
              }

   printf("-----------------------------------------\n\n");

   printf("FIN DEL PROGRAMA\n\n");

return 0;

}
