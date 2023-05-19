#include<stdio.h>

double sommatoria (int n){
    double s_n=1;
    double s_t=s_n;
    double tmp;
    printf("%lf\n", s_t);
    for(int k=1; k<=n; k++){
        tmp=(2*k+1)*(2*k+1);
        s_n=1/tmp;
        s_t=s_t+s_n;
        printf("a_%d = %lf\n", k, s_t);} 
    return (s_t);
    }      

int main(){
int n;

printf("Scegli il valore di n: ");
scanf("%d", &n);
sommatoria(n);    
}