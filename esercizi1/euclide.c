#include <stdio.h>
void main ()
{

int x;
int y;

printf("Inserisci il valore di x:");
scanf("%d", &x);

printf("Inserisci il valore di y:");
scanf("%d", &y);

int mcd;

while(x!=y) 
    {
    if(x>y)
        x=x-y;
    else
        y=y-x;
    }   
mcd=x;


printf("Il MCD tra x e y è pari a: %d\n", x);
      
        
}