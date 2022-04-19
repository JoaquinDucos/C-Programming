#include <stdio.h>
int main(int cuenta, char * p[])
{
    int cont=0,j=0;
    char *posiciones;
    if(cuenta == 3)
	{
        if(p[2][0] > ' ' && p[2][0] <= '~' )
        {
            while(p[1][cont] != '\0' && j<100)
            {
                if(p[1][cont] == p[2][0])
                {
                    posiciones=p[1]+cont;
                    printf("V[%d]: %p\n",cont,posiciones);
                    j++;
                }
                cont ++;
            }
            printf("El caracter %s se repite %d veces \n",p[2],j);
        }
        else
        {
            printf("\tIngrese un caracter ASCII entre el 32 y 126\n");
        }
		
	}
	else
	{
        printf("Uso del programa:\n");
		printf("\t\t %s <frase> <caracter ASCII> .......\n",p[0]);
		printf("El caracter ASCII entre el 32 y el 126 \n");
	}
	return 0;
}
    
    
    
    