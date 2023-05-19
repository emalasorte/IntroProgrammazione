#include <stdio.h>
double sucf(int n){
    if(n==1)
        return 1;
    return (n+1)/(sucf(n-1));
}
double produttoria(int n){
    double r=1;
    for(int i=n; i>=1; i--)
        r=r*sucf(i);
    return r;
}
int main(){
int n;
printf("Scegli un valore di n: ");
scanf("%d", &n);
printf("%lf\n", produttoria(n));}