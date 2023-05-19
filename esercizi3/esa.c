#include <stdio.h>

double pot_ric (double base, int esponente){
    if(esponente==1)
        return base;
    return base*pot_ric(base, esponente-1);}

double s_n (int n, double k){
    double num, den, sum;
    if(n==1)
        return (k*k)/3;
    else {
    num=n*pot_ric(k, n+1);
    den=pot_ric(3, n);
    sum=num/den;
    return sum + s_n(n-1, k);}
}
int main()
{
double k;
int n;
printf("Inserisci il numero n: ");
scanf("%d", &n);
printf("Inserisci il numero k: ");
scanf("%lf", &k);
printf("%lf\n", s_n(n, k));
}