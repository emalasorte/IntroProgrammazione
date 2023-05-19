#include <stdio.h>
int produttoria(int n){
    if(n==0)
        return 1;
    return n%10*produttoria(n/10);
}
int prod_ite(int n){
    int a_t=1;
    for(int i=n; i==0; i/10){
        int a_i=i%10;
        a_t=a_t*a_i;
        printf("%d\n", a_t);}
    return a_t;
    }

int main(){
int n;
printf("Scegli un valore di n: ");
scanf("%d", &n);
printf("%d\n", produttoria(n));
printf("Il risultato finale della produttoria di %d è %d\n", n, prod_ite(n));}

