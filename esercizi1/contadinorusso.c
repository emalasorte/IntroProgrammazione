#include <stdio.h>
void main()

{
int m, n;

printf("Scegli un numero: ", m);
scanf("%d", &m);

printf("Scegli un numero: ", n);
scanf("%d", &n);

int p=0;

while(m!=0)
{
    int g=m;
    while(g>1)
    
        g=g-2;
    
    if(g!=0)
        p=p+n;
    
    
    m=m/2;
    n=n*2;
    
    }

printf("Il risultato finale è %d\n", p);    
    
}