#include <stdio.h>
int potenza(int esponente){
    if(esponente==1)
        return 2;
    return 2*potenza(esponente-1);
}
int sommatoria(int n){
    if(n==1)
        return 1;
    return n+sommatoria(n-1);
}
int main(){
    int n;
    printf("Scegli n: ");
    scanf("%d", &n);
    printf("%d\n", potenza(n)*sommatoria(n));
}