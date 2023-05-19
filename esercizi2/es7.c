#include <stdio.h>
#include <math.h>

double a_n(int n, double p){
    double a_i=p;
    printf("a_1=%lf\n", p);
    for(int i=2; i<=n; i++){
        a_i=0.5*(a_i+p/a_i);
        printf("a_%d=%lf\n", i, a_i);}
    return(a_i);
    }
int main(){
int e;
double f;
printf("Scegli il valore di e: ");
scanf("%d", &e);
printf("Scegli il valore di f: ");
scanf("%lf", &f);
a_n(e, f);    
}
    
    
