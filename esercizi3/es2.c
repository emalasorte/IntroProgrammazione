#include <stdio.h>

double somma(int n){
    double a_n=0.5;
    if(n==1)
        return(a_n=0.5);
    else
        return((somma(n-1)+1)/2);
}
void main(){
int n;
printf("Scegli un valore: ");
scanf("%d", &n);
double a=somma(n);
printf("%lf\n", a);}