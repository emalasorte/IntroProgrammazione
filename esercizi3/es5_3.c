#include <stdio.h>

int sommatoria(int k){
    if(k==0)
        return 0;
    return k + sommatoria(k-1);   
}
int main(){
int k;
printf("Scegli un numero: ");
scanf("%d", &k);
printf("%d\n", sommatoria(k));
int r=0;
for(int i=0; i<=k; i++){
    r=r+i;
    printf("%d\n", r);}
    }