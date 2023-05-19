#include <stdio.h>

int somma(int j){
    if(j==0)
        return(0);
    return(j+(somma(j-1)));
}

int main(){
int j;
printf("Scegli un numero: ");
scanf("%d", &j);
int a=somma(j);
printf("%d\n", a);
int x, b;
printf("Scegli un numero: ");
scanf("%d", &a);
printf("Scegli un numero: ");
scanf("%d", &b);
for(int j=x; j<=b; j++){
    
    
}

}

    
