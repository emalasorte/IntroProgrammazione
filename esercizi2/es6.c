#include <stdio.h>

double successione(int n){
    double a_i=0.5;
    printf("a_1=%.7lf\n", a_i);
    for(int i=2; i<=n; i++){
        a_i=(a_i+1)/2;
        printf("a_%d=%lf\n", i, a_i);}
        return(a_i);
    }
    
int main(){
int n;
printf("Scegli un valore di n: ");
scanf("%d", &n);
successione(n);     
    

    
}