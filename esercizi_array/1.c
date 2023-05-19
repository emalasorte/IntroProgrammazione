 m#include <stdio.h>

int sommatoria(int a[], int n){
int ris=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            ris=ris+a[i];}}
    return ris;}

void main(){
    int a[3];
    a[3]=1,2,3;
    int n=3;
    printf("%d\n", sommatoria(a, n));
}










