#include <stdio.h>

int main ( void ) 
{
float sum = 0, valor, promedio;

int i = 0, n = 0;

printf("\nIngrese numeros hasta que alcance el valor de 100 o se introduzca un 0 para finalizar el ingreso de los mismos\n");
    
for (i = 1; sum<100; i++)
    {
        printf("\nIngrese el valor %d: \n",i);
             scanf("%f", &valor);
             
             sum+=valor;
             n++;
             
             if ( valor == 0)
             { 
                 printf("\nSe ha introducido un 0, por lo tanto ha finalizado el conteo\n");
                 n-= 1;
                 
                 break;
             }    
    }
promedio = sum / n;
 
printf("\nLa suma total de los numeros introducidos es de: %f\n", sum);

printf("\nEl promedio de los numeros introducidos es de: %f\n", promedio);

printf("\nPrograma finalizado\n\n");

return 0;
}

