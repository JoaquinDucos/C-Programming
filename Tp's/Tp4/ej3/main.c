#include <stdio.h>

int main (void)
{
int i;


    for(i=1;i<101;i++)
    {
    
        if(i%15 == 0)
        {
            printf("TanQue\n");
        } 
        else if(i%3 == 0)
        {
            printf("Tan\n");
        }
        else if(i%5 == 0)
        {
            printf("Que\n");
        }
        else 
        {
            printf("%d\n", i);
        }    
         
    }   
return 0;
}
