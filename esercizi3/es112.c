#include <stdio.h>
double successione(int n){
    //printf("s_1 - 0.5\n");
    if(n==1){
       return 0.5;}
    //printf("s_%d - %lf\n", n, (successione(n-1)+1)*0.5);
    return (successione(n-1)+1)*0.5;
}
int main()
{
int n;
printf("Inserisci il numero n: ");
scanf("%d", &n);
printf("%lf\n", successione(n));
}