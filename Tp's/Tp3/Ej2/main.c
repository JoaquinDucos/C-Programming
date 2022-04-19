#include <stdio.h>

int main (void) 
{
int n, Desc= 100;
float articulos, Sum, Faltante, MontoBonif;


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
   
   printf("\nIngrese el monto a partir del cual se realizara una bonificacion!: \n $");
   scanf("%f", &MontoBonif);
   
   if(MontoBonif>0 && Sum<Desc)
              {
                printf("\nEl valor de los 5 articulos no supera el valor de la bonificacion, por lo cual no va a ser posible realizar el descuento!\n");
                printf("\nEl precio total a pagar es de: $%7.2f \n\n", Sum);
              }  
   
   else if(MontoBonif>0 && Sum>Desc)
      {

          if(Sum>MontoBonif)
            {
    
                 printf("\nEl precio de los articulos es de: $%7.2f  \n", Sum);
    
                       Sum = Sum - 100;
                       
                 printf("\nLa compra ha superado los $%7.2f, obtienes un descuento de $%d!\n", MontoBonif, Desc);
                 printf("\nEl precio total a pagar es de: $%7.2f \n\n", Sum);
            }
            
          else if(Sum<MontoBonif)
              {
                 printf("\nEl precio total a pagar es de: $%7.2f \n", Sum);
                 
                 Faltante = MontoBonif - Sum;
                 
                 printf("\nTe faltan $%7.2f para poder obtener un descuento de $%d!\n\n", Faltante, Desc);
              }
       }
       else
           {
             while (MontoBonif<0)
              {
                        printf("\nLos valores ingresados para la bonificacion no fueron aceptados debido a que no son numeros positivos, por favor elija nuevamente un valor! : \n $");
                        scanf("%f", &MontoBonif);
                 
              if(Sum>MontoBonif)
            {
    
                 printf("\nEl precio de los articulos es de: $%7.2f  \n", Sum);
    
                       Sum = Sum - 100;
                       
                 printf("\nLa compra ha superado los $%7.2f, obtienes un descuento de $%d!\n", MontoBonif, Desc);
                 printf("\nEl precio total a pagar es de: $%7.2f \n\n", Sum);
            }
            else if(Sum<MontoBonif)
              {
                 printf("\nEl precio total a pagar es de: $%7.2f \n", Sum);
                 
                 Faltante = MontoBonif - Sum;
                 
                 printf("\nTe faltan $%7.2f para poder obtener un descuento de $%d!\n\n", Faltante, Desc);
              }      
           }
          }         
   printf("-----------------------------------------\n\n");

   printf("FIN DEL PROGRAMA\n\n");

return 0;

}

