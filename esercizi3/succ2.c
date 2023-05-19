#include <stdio.h>
double sommatoria(int n){

    if(n==0)
        return 1;
    double den=((2*n+1)*(2*n+1));
    return 1/den+sommatoria(n-1);
}
int main(){
int n;
printf("Scegli n: ");
scanf("%d", &n);
printf("%lf\n", sommatoria(n));}