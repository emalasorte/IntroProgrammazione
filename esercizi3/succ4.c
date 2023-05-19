#include <stdio.h>
int produttoria(int n){
    if(n==2)
        return(2);
    return n*produttoria(n-1);
}
int main(){
    int n;
    printf("Scegli n: ");
    scanf("%d", &n);
  
    printf("%d\n", produttoria(n-1));
    }