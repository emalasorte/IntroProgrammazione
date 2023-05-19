
//Dati due numeri interi da tastiera, calcolarne il coefficiente binomiale
#include <stdio.h>
void main()

{
int n, k; //inizializzo le variabili numeriche

printf("Inserire n: "); //chiedo all'utente di specificare le variabili
scanf("%d", &n);
printf("Inserire k: ");
scanf("%d", &k);
if(n>=k){ //specifico la condizione dove se n è maggiore di k il coefficiente binomiale è pari a 0
int f=1;
for(int i=1; i<=n; i++)//primo ciclo for per determinare il fattoriale di n
    f=f*i;
int g=1;
for(int iq=1; iq<=k; iq++)//secondo ciclo for per determinare il fattoriale di k
    g=g*iq;
int dif=(n-k);
for(int iw=1; iw<=dif; iw++)//terzo ciclo for per determinare il fattoriale di n-k
    dif=dif*iw;
float tot= f/(g*dif);  //inizializzo la variabile tot con float perchè potrebbe essere un numero non naturale
printf("Coefficiente binomiale di %d su %d è %f\n",n, k, tot);//stampo il risultato
}
else{
printf("Il coefficiente binomiale è pari a 0\n");//condizione else nel caso in cui n sia minore di k
}
return(0);
}
