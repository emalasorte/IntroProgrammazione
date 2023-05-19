#include <stdio.h>

int numeroprimo(int n){
    for(int i=2; i<=n; i++) {
    if(n%i==0){
        return(0);}
    else{
        return(1);}}} 

int main(){
    int n;
    printf("Inserire un numero (n): ");
    scanf("%d", &n);
int a=numeroprimo(n);
    if(a==1){
        printf("%d è un numero primo\n", n);}
    else{
        printf("%d non è un numero primo\n", n);
    }
    
}