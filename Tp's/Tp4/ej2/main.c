#include <stdio.h>

int main (void)
{
    float patron, resist, porDiez, porCinco, prom = 0, suma, promPor = 0, dif=0, difPor=0;
    int i = 0, n = 0, cont1 = 0, cont2 = 0;
    
   printf("\n       ************************************************************");
   printf("\n       *                                                          *");
   printf("\n       *                                                          *");
   printf("\n       *                      RESISTIRE S.A.                      *");
   printf("\n       *                                                          *");
   printf("\n       *                                                          *");
   printf("\n       ************************************************************");   
   
   printf("\n\n       -----------------Departamento de calidad--------------------");
   
   printf("\n\n Ingrese el valor de la resistencia patron (En Ohms): ");
   scanf("%f", &patron);
   
       porDiez =  (10*patron)/100;
       porCinco = (5*patron)/100;
       
   if(patron == 0)
   {
       while (patron == 0)
       {
       printf("\n El valor ingresado para la resistencia patron no puede ser igual a 0, por favor intente nuevamente!");
       printf("\n\n Ingrese el valor de la resistencia patron (En Ohms): ");
       scanf("%f", &patron);
       printf("\n\n");
       }
       
       for(i =1; resist != 0; i++)
       {
           printf(" Ingrese el valor de la resistencia (En Ohms): ");
           scanf("%f", &resist);
           n++;
           suma += resist;
           
           dif = patron - resist;
           difPor+= dif;
       
           if (patron + porDiez < resist || patron - porDiez > resist)
            {
               cont1++;
            }
            if (resist <= patron + porCinco || resist >= patron - porCinco)
            {
               cont2++;
            }
       }
    n -=1 ;
    cont1 -=1 ;

   }
   
    for(i =1; resist != 0; i++)
       {
           printf(" Ingrese el valor de la resistencia (En Ohms): ");
           scanf("%f", &resist);
           n++; 
           suma += resist;
        
            dif = patron - resist;
            difPor+= dif;
           
        if (resist > patron + porDiez || resist < patron - porDiez)
            {
               cont1++;
            }
        if (  resist <= patron + porCinco && resist >= patron - porCinco)
            {
               cont2++;
            }
       }
        n -= 1;
        cont1 -=1 ;
       
       printf("\n                           --------------REPORTE---------------\n");
       
       printf("\n Para la resistencia patron de valor:%7.2f con una carga de %d resistencias, nos encontramos que:\n", patron, n);
       
        printf("\n Resistencias mayores al 10 por ciento: %d", cont1);

        printf("\n Resistencias dentro del 5 por ciento: %d", cont2);
    
 prom = suma/n; 
 
 promPor = (difPor/2)/n;
 
 if(promPor>0)
 {
 
 printf("\n Resistencia promedio de %7.2f y tienen una variacion del %7.2f porciento\n\n", prom, promPor);
 }
 else
 {
      promPor = -((difPor/2)/n);
      printf("\n Resistencia promedio de %7.2f y tienen una variacion del %7.2f porciento\n\n", prom, promPor);
 }
 
  printf("                       --------------FIN DEL PROGRAMA---------------\n\n");
       
return 0;
}
