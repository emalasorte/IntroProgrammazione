#include <stdio.h>

int pot(int n){
    if(n==1)
        return(2);
    return (2*pot(n-1));
}

 ite_pro(int a, int b){
    int x=1;
    for(int i=a; i<(b/2); i++){
        x=x*pot(i/a);}
    return(x=x-b);
}
int main(){
int n, a, b;
printf("Scegli un numero: ");
scanf("%d", &n);
printf("Scegli un numero: ");


    
scanf("%d", &a);
printf("Scegli un numero: ");
scanf("%d", &b);
printf("%d\n", ite_pro(a, b));
}