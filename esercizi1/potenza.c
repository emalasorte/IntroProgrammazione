#include <stdio.h>
void main()
{
    
int base;
int esponente;
int risultato=1;
    {


    printf("Scegli il numero della base: ");
    scanf("%d", &base);

    do
    {
    printf("Scegli il numero dell'esponente: ");
    scanf("%d", &esponente);
    }
    while(esponente<0);

    printf("La base acquisita è: %d\n", base);
    printf("L'esponente acquisito è: %d\n", esponente);
    
    for(esponente; esponente>0; esponente--)
        {
        risultato=risultato*base;
        }
    
        

    printf("Il risultato è pari a: %d\n", risultato);
    }

        
    



    
}