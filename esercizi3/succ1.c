#include <stdio.h>
double successione(int p, int n){
    if(n==1)
        return p;
    return 0.5*(successione(p, n-1)+(p/successione(p, n-1)));
}
int main(){
int p;
int n;
printf("Scegli p: ");
scanf("%d", &p);
printf("Scegli n: ");
scanf("%d", &n);
printf("%lf\n", successione(p, n));}