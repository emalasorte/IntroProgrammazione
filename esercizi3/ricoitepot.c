#include <stdio.h>
int ricopot(int base, int esponente){
    if(esponente==1){
        return(base);}
    return base*ricopot(base, esponente-1);
}

int itepot(int base, int esponente){
    int risultato=1;
    for(esponente; esponente>0; esponente--)
        {
        risultato=risultato*base;
        }
    return risultato;}

int test(){
    int base=5;
    int esponente=5;
    return(ricopot(base, esponente));
    
}
int main(){
int base;
int esponente;
printf("Scegli la base: ");
scanf("%d", &base);
printf("Scegli l'esponente: ");
scanf("%d", &esponente);
int a=itepot(base, esponente);
printf("%d\n", a);
printf("%d\n", ricopot(base, esponente));
int b=test();
printf("%d\n", b);}

